#ifndef DATABASE_H
#define DATABASE_H

#include "databasedatatypes.h"
#include <QObject>
#include <QtSql>
#include <QDebug>

//class QSqlQuery;
/*!
 * \brief The DatabasePrivate class
 */

class DatabasePrivate
{
public:
    QSqlDatabase db;
    QString password;
    QString path;
};

/*
ici on défini les méthodes liées à la database
*/

class Database : public QObject
{
    Q_OBJECT
public:
    /*!
     * \brief Database connection by Lolo
     * \param path
     * \param parent
     */
    Database(const QString & path, QObject *parent = 0);
    ~Database();

    void connect();
    void disconnect();
    void setPath(const QString &path);

private:
    DatabasePrivate *p;
};
#endif // DATABASE_H
