#ifndef DATABASE_H
#define DATABASE_H

#include "databasedatatypes.h"
#include "databaseconnection.h"

#include "qtrpt.h"
#include <CommonClasses.h>

#include "mymodel.h"
#include <QObject>
#include <QtSql>
#include <QDebug>


class Database : public QObject
{
    Q_OBJECT
public:
    Database(const QString & path, QObject *parent = 0);
    ~Database();

    void connect();
    void disconnect();
    void setPath(const QString &path);
    void checkDatabase();


    MyModel *tracksmodel();
    QSqlQueryModel *typesmodel();

    void levels2combobox(QComboBox *cb);
    void users2combobox(QComboBox *cb);

    void setTrack(int id);
    void getTrack(int id);
    void delTrack(int id);

    Tracks track;


private:
    DatabaseConnection *dbase;

};
#endif // DATABASE_H

