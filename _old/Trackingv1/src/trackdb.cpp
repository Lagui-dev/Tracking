#include "trackdb.h"

trackdb::trackdb(QWidget *parent)
{
    widget=parent;
}

QSqlError trackdb::initDb()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setConnectOptions("SQLITE_OPEN_CREATE");
    db.setDatabaseName(QCoreApplication::applicationDirPath() + "/tracking.db");
    if (!db.open())
    {
        connected=false;
        return db.lastError();
    } else
    {
        connected=true;
    }

    if (!db.tables().contains("tracks"))
    {
        qDebug() << "DB.contains : la table tracks n'existe pas";
        // on crée la table Tracks
        createTable("CREATE TABLE tracks ("
                "track_id  INTEGER PRIMARY KEY AUTOINCREMENT,"
                "issue  TEXT,"
                "type_id  INTEGER,"
                "level_id  INTEGER,"
                "open_date  TEXT,"
                "open_user_id  INTEGER,"
                "close_date  TEXT,"
                "close_user_id  INTEGER,"
                "comments  TEXT"
                ");",db);

    }

    if (!db.tables().contains("levels"))
    {
        qDebug() << "DB.contains : la table levels n'existe pas";
        // on crée la table levels
        createTable("CREATE TABLE levels ("
                        "level_id  INTEGER PRIMARY KEY AUTOINCREMENT,"
                        "level  TEXT(50)"
                        ");",db);
        ExecQuery("INSERT INTO levels VALUES (1, 'low');"
                  "INSERT INTO levels VALUES (2, 'medium');"
                  "INSERT INTO levels VALUES (3, 'high');"
                  ,db);
    }

    if (!db.tables().contains("types"))
    {
        qDebug() << "DB.contains : la table types n'existe pas";
        // on crée la table types
        createTable("CREATE TABLE types ("
                    "type_id  INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "type  TEXT(50)"
                    ");",db);
        ExecQuery("INSERT INTO types VALUES (1, 'error');"
                  "INSERT INTO types VALUES (2, 'add');"
                  "INSERT INTO types VALUES (3, 'check');"
                  ,db);

    }

    if (!db.tables().contains("users"))
    {
        qDebug() << "DB.contains : la table users n'existe pas";
        // on crée la table users
        createTable("CREATE TABLE users ("
                        "user_id  INTEGER PRIMARY KEY AUTOINCREMENT,"
                        "user  TEXT(50)"
                        ");",db);
        ExecQuery("INSERT INTO users VALUES (1,'Laurent');INSERT INTO users VALUES (2,'Thomas');",db);

    }


    return db.lastError();
}

void trackdb::showError(const QSqlError &err)
{
    QMessageBox::critical(widget, "Unable to initialize Database", "Error initializing database: " + err.text());
}

trackdb::~trackdb()
{

}

void trackdb::createTable(QString myQueryStr, const QSqlDatabase &db)
{
    QSqlQuery myQuery = db.exec(myQueryStr);

    if(myQuery.lastError().isValid())
    {
        qDebug() << "Erreur pendant l'execution de la requete SQL : " << myQuery.lastError().text();
        QCoreApplication::exit();
    }

}

void trackdb::ExecQuery(QString myQuerystr, const QSqlDatabase &db)
{
    QSqlQuery myQuery(db);
    QStringList scriptQueries = myQuerystr.split(';');

       foreach (QString queryTxt, scriptQueries)
       {
           if (queryTxt.trimmed().isEmpty()) {
               continue;
           }
           if (!myQuery.exec(queryTxt))
           {
               qDebug() << "Erreur pendant l'execution de la requete SQL :" << myQuery.lastError().text();
           }
           myQuery.finish();
       }
}
