#include "trackdb.h"

trackdb::trackdb(QWidget *parent)
{
    widget=parent;
}

QSqlError trackdb::initDb()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setConnectOptions("SQLITE_OPEN_CREATE=0");
    db.setDatabaseName(QCoreApplication::applicationDirPath() + "/tracking.db");
    if (!db.open())
    {
        return db.lastError();
    }
        return QSqlError();
}

void trackdb::showError(const QSqlError &err)
{
    QMessageBox::critical(widget, "Unable to initialize Database", "Error initializing database: " + err.text());
}

trackdb::~trackdb()
{

}
