#include "track.h"
#include "trackdb.h"
#include "trackdelegate.h"
#include "database.h"
#include "databasedatatypes.h"

#include "ui_track.h"
#include <QDebug>
#include <QDataWidgetMapper>

track::track(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::track)
{
    ui->setupUi(this);
    Database db(QCoreApplication::applicationDirPath() + "/tracking.db");
    db.connect();
    Tracks t;
    t.close_date= QDate::currentDate();
    qDebug() << t.id;
    qDebug() << t.close_date;


    trackdb *trackDB = new trackdb(this);
    QSqlError err = trackDB->initDb();
    if (err.type() != QSqlError::NoError)
    {
        trackDB->showError(err);
        return;
    }
    qDebug() << "db connected ? " << trackDB->connected;

    // creation du modele
    model = new QSqlRelationalTableModel(ui->tableView,trackDB->db);
    // model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setTable("tracks");

    // colonnes indexées
    levelIdx = model->fieldIndex("level_id");
    typeIdx = model->fieldIndex("type_id");
    openuserIdx = model->fieldIndex("open_user_id");
    closeuserIdx = model->fieldIndex("close_user_id");

    // définir les relations entre les tables
    model->setRelation(levelIdx, QSqlRelation("levels", "level_id", "level"));
    model->setRelation(typeIdx, QSqlRelation("types", "type_id", "type"));
    model->setRelation(openuserIdx, QSqlRelation("users", "user_id", "user"));
    model->setRelation(closeuserIdx, QSqlRelation("users", "user_id", "user"));

    // définir les entêtes des colonnes
    model->setHeaderData(levelIdx, Qt::Horizontal, tr("Level"));
    model->setHeaderData(typeIdx, Qt::Horizontal, tr("Type"));
    model->setHeaderData(openuserIdx, Qt::Horizontal, tr("Opened by"));
    model->setHeaderData(closeuserIdx, Qt::Horizontal, tr("Closed by"));

    // selectionner les données et les associer à la vue
    model->select();

    //ui->tableView->set
    ui->tableView->setModel(model);

    //ui->tableView->setItemDelegate(new trackDelegate(ui->tableView));

    //ui->tableView->setItemDelegate(new QSqlRelationalDelegate(model));

    //ui->tableView->setColumnHidden(model->fieldIndex("track_id"), true);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);

    // ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableView->resizeRowsToContents();


    // Init des combos
    ui->cmbLevel->setModel(model->relationModel(levelIdx));
    ui->cmbLevel->setModelColumn(model->relationModel(levelIdx)->fieldIndex("level"));
    ui->cmbType->setModel(model->relationModel(typeIdx));
    ui->cmbType->setModelColumn(model->relationModel(typeIdx)->fieldIndex("type"));
    ui->cmbOpenUser->setModel(model->relationModel(openuserIdx));
    ui->cmbOpenUser->setModelColumn(model->relationModel(openuserIdx)->fieldIndex("user"));
    ui->cmbCloseUser->setModel(model->relationModel(closeuserIdx));
    ui->cmbCloseUser->setModelColumn(model->relationModel(closeuserIdx)->fieldIndex("user"));

    QDataWidgetMapper *mapper = new QDataWidgetMapper(this);
    mapper->setModel(model);
    mapper->addMapping(ui->cmbLevel, levelIdx);
    mapper->addMapping(ui->cmbType,typeIdx);
    mapper->addMapping(ui->cmbOpenUser,openuserIdx);
    mapper->addMapping(ui->cmbCloseUser,closeuserIdx);
    mapper->addMapping(ui->txtIssue, model->fieldIndex("issue"));
    mapper->addMapping(ui->txtComments,model->fieldIndex("comments"));
    mapper->addMapping(ui->dateOpen,model->fieldIndex("open_date"));
    mapper->addMapping(ui->dateClose,model->fieldIndex("close_date"));

    // on connecte
    connect(ui->tableView->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),
            mapper, SLOT(setCurrentModelIndex(QModelIndex)));
    connect(ui->btnNext,SIGNAL(clicked()),mapper,SLOT(toNext()));
    connect(ui->btnPrevious,SIGNAL(clicked()),mapper,SLOT(toPrevious()));
    connect(mapper, SIGNAL(currentIndexChanged(int)),
            this, SLOT(updateButtons(int)));

    // on se positionne sur le premier
    ui->tableView->setCurrentIndex(model->index(0, 0));


}

track::~track()
{
    delete ui;
}

// Slots
// fermer l'application
void track::on_btnClose_clicked()
{
    this->close();
}

// Activer/Désactiver les boutons
void track::updateButtons(int row)
{
    ui->btnPrevious->setEnabled(row > 0);
    ui->btnNext->setEnabled(row < model->rowCount() - 1);
}

void track::on_pushButton_clicked()
{
    //QFile File(QCoreApplication::applicationDirPath() +"/darkorange.css");
    QFile File(":/darkorange.css");
     File.open(QFile::ReadOnly);
     QString StyleSheet = QLatin1String(File.readAll());
     this->setStyleSheet(StyleSheet);
}

void track::on_btnAdd_clicked()
{

    QSqlRecord newRecord = model->record();
    //newRecord.setValue(1,10);
    //newRecord.setValue(1,"");
    newRecord.setValue(2,1);
    newRecord.setValue(3,1);
    newRecord.setValue(4,"2014-09-01");
    newRecord.setValue(5,1);
    newRecord.setValue(6,"2014-09-01");
    newRecord.setValue(7,1);
    newRecord.setValue(8,"");
    //newRecord.setGenerated("testing",true);
    model->insertRecord(-1,newRecord);
    qDebug() << "model insert record : " << model->lastError();
    // model->submitAll();
    model->select();
    ui->tableView->setCurrentIndex(model->index(model->rowCount()-1,0));
    ui->txtIssue->setFocus();
}
