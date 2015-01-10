#include "track.h"
#include "trackedit.h"

#include "databasedatatypes.h"

#include "ui_track.h"
#include <QDebug>
#include <QDataWidgetMapper>
#include <QMessageBox>

track::track(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::track)
{

    ui->setupUi(this);
    this->db = new Database(QCoreApplication::applicationDirPath() + "/tracking.db");
    this->db->connect();
    this->db->checkDatabase();

    ui->tableView->setModel(this->db->tracksmodel());
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->hideColumn(0);
    ui->tableView->resizeColumnsToContents();

    QModelIndex cur=ui->tableView->model()->index(0,0);
    ui->tableView->setCurrentIndex(cur);
}

track::~track()
{
    delete ui;
}


// fermer l'application
void track::on_btnClose_clicked()
{
    this->close();
}

void track::on_btnAdd_clicked()
{
    trackedit *t;
    t = new trackedit(this,db);
    connect (t, SIGNAL (JeTeste (int)), this, SLOT (JeTesteBien(int)));
    t->show();

}

void track::on_btnTheme_clicked()
{
    QFile File(":themes/darkorange.css");
     File.open(QFile::ReadOnly);
     QString StyleSheet = QLatin1String(File.readAll());
     this->setStyleSheet(StyleSheet);
}

void track::on_btnModify_clicked()
{
    //qDebug() << "track_id : " << this->db->tracksmodel()->index(ui->tableView->currentIndex().row(), 0).data().toString();
    //db->getTrack(this->db->tracksmodel()->index(ui->tableView->currentIndex().row(), 0).data().toInt());
    //qDebug() << this->db->tracksmodel()->record(ui->tableView->currentIndex().row());
    trackedit *t;
    t = new trackedit(this,this->db,this->db->tracksmodel()->index(ui->tableView->currentIndex().row(), 0).data().toInt());
    connect (t, SIGNAL (JeTeste (int)), this, SLOT (JeTesteBien(int)));
    t->show();
}

void track::JeTesteBien(int idx)
{
    qDebug() << "valeur de idx : " << idx;
    ui->tableView->setModel(this->db->tracksmodel());
    ui->tableView->selectRow(1);
    ui->tableView->setFocus();
}

void track::on_btnDelete_clicked() {
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, tr("Tracking - Delete"), tr("Delete this row ?"),
        QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        db->delTrack(this->db->tracksmodel()->index(ui->tableView->currentIndex().row(), 0).data().toInt());
        ui->tableView->setModel(this->db->tracksmodel());
    }
}

void track::on_btnPrint_clicked() {
    ui->tableView->setModel(this->db->tracksmodel());
}

void track::ColorTableView() {
    QBrush red;
    QModelIndex index;
    red.setColor(Qt::red);
}
