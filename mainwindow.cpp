#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>

#include <QSql> // pour les bases de donnees sql
#include <QSqlDatabase> // connexion à la database
#include <QSqlQuery> // pour les requetes
#include <QSqlTableModel> // creation de modele pour eviter de passer par du SQL brut
#include <QSqlRecord> // un enregistremement de modele ou query
#include <QSqlError> // recuperation des erreurs



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Opendatabase();
    Requete();
    InsertMethode1();
    InsertMethode2();
    TableModeleView();

}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::Opendatabase()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("H:/Mes Developpements/QT/Tracking/tracking.db");
    qDebug() << "Ouverture de la base de données";
    if (!db.open())
    {

        qDebug() << "Impossible de se connecter à la DB";
        QMessageBox::critical(0, QObject::tr("Database Error"),db.lastError().text());
    }
    else
    {
        MessageBox("Je suis connecté à la base de données.");
        qDebug() << "connecté à la DB";
    }
    return false;
}

void MainWindow::Requete()
{
    qDebug() << "Requete 1";
    QSqlQuery query;
    query.exec("SELECT id, issue FROM issues");

    if (!query.isActive())
    {
        QMessageBox::warning(this, tr("PIT - MainWindow : Query error"), query.lastError().text());
    }
    else
    {
        while (query.next())
        {
            QString issue = query.value(1).toString();
            int id = query.value(0).toInt();
            qDebug() << id << issue;
        }
    }

}

void MainWindow::InsertMethode1()
{
    QSqlQuery query("INSERT INTO issues (issue) VALUES ('insertmethode1')");
}

void MainWindow::InsertMethode2()
{
    QSqlQuery query;
    query.prepare("INSERT INTO issues (issue) VALUES (:issue)");
    query.bindValue(":issue", "insertmethode2-1x");
    query.exec();
    query.bindValue(":issue", "insertmethode2-2x");
    query.exec();
}

void MainWindow::TableModele()
{
    QSqlTableModel model;
    model.setTable("issues");
    model.setFilter("id >= 5");
    model.select();

    for (int i = 0; i < model.rowCount(); ++i)
    {
        QSqlRecord record = model.record(i);
        QString issue = record.value("issue").toString();
        int id = record.value("id").toInt();
        qDebug() << id << issue;
    }
}

void MainWindow::TableModeleView()
{
    QSqlTableModel *model;
    model = new QSqlTableModel(this);
    model->setTable("issues");
    model->setSort(0,Qt::AscendingOrder);
    model->setHeaderData(0, Qt::Horizontal, tr("identifiant"));
    model->setHeaderData(1, Qt::Horizontal, tr("issue"));
    model->select();

    //connect(model, SIGNAL(beforeInsert(QSqlRecord&)),this,SLOT(beforeInsertIssue(QSqlRecord &));

    ui->tableView->setModel(model);
/*    for (int row = 0; row < model->rowCount(); ++row)
    {
        QSqlRecord record = model->record(row);
        if (record.value(Artist_Name).toString() == name)
        {
            tableView->selectRow(row);
            break;
        }
    }*/
}

void MainWindow::MessageBox(QString msg)
{
    QMessageBox messagebox;
    messagebox.setWindowTitle("PIT- MainWindow");
    messagebox.setIcon(QMessageBox::Information);
    messagebox.setText(msg);
    messagebox.exec();
    //QMessageBox::Warning(0,QObject::tr("PIT - Message"),"Je suis bien connecté à la base de données.");
}
