#include "database.h"

Database::Database(const QString &path, QObject *parent) :
    QObject(parent)
{
    p = new DatabasePrivate;
    p->db = QSqlDatabase::addDatabase( "QSQLITE");
    p->path=path;
}

Database::~Database()
{
    delete p;
}

/*!
 * \brief Database::connect c'est ici
 */

void Database::connect()
{
    if( p->db.isOpen() )
        return;

    p->db.open();
}

void Database::disconnect()
{
    if( !p->db.isOpen() )
        return;

    p->db.close();
}

void Database::setPath(const QString &path)
{
    p->path = path;
    disconnect();
    p->db.setDatabaseName(p->path);
}
