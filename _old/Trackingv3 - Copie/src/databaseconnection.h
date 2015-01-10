#ifndef DATABASEPRIVATE_H
#define DATABASEPRIVATE_H
#include <QtSql>
#include <QDebug>
#include <QObject>

class DatabaseConnection : public QObject
{
    Q_OBJECT

public:
    DatabaseConnection(QObject *parent = 0);
    ~DatabaseConnection();
    QSqlDatabase db;
    QString password,path;
};

#endif // DATABASEPRIVATE_H
