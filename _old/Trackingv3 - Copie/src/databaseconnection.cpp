#include "databaseconnection.h"

DatabaseConnection::DatabaseConnection(QObject *parent) :
    QObject(parent) {
    db = QSqlDatabase::addDatabase( "QSQLITE");
    password="";
    path="";

}

DatabaseConnection::~DatabaseConnection() {

}



