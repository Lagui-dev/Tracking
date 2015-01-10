#include "database.h"
#include <QMessageBox>


Database::Database(const QString &path, QObject *parent) :
    QObject(parent) {
    dbase = new DatabaseConnection();
    dbase->path = path;
    dbase->db.setDatabaseName(dbase->path);

}

Database::~Database() {
    delete dbase;
}

void Database::connect() {
    if(dbase->db.isOpen())
        return;

    if(!dbase->db.open())     {
        QMessageBox::critical(0, QObject::tr("Database Error"), dbase->db.lastError().text());
    }
    else {
        QMessageBox::information(0, QObject::tr("Database"), tr("Connected to database."));
    }
}

void Database::disconnect() {
    if(!dbase->db.isOpen())
        return;
    dbase->db.close();
}

void Database::setPath(const QString &path) {
    dbase->path = path;
    disconnect();
    dbase->db.setDatabaseName(dbase->path);
}

void Database::checkDatabase() {
    QSqlQuery q(dbase->db);

    if (!dbase->db.tables().contains("tracks")) {
        qDebug() << QString("DB.contains : Table %1 does not exist").arg("tracks");

        q.exec("CREATE TABLE tracks ("
                "track_id  INTEGER PRIMARY KEY AUTOINCREMENT,"
                "issue  TEXT,"
                "type_id  INTEGER,"
                "level_id  INTEGER,"
                "open_date  TEXT,"
                "open_user_id  INTEGER,"
                "close_date  TEXT,"
                "close_user_id  INTEGER,"
                "comments  TEXT"
                ");");

    }

    if (!dbase->db.tables().contains("levels")) {
        qDebug() << "DB.contains : Table levels does not exist";
        q.exec("CREATE TABLE levels ("
                        "level_id  INTEGER PRIMARY KEY AUTOINCREMENT,"
                        "level  TEXT(50)"
                        ");");
        q.prepare("INSERT INTO levels VALUES (?, ?");
        QVariantList ints;
        ints << 1 << 2 << 3;
        q.addBindValue(ints);

        QVariantList names;
        names << "low" << "medium" << "high";
        q.addBindValue(names);
        q.execBatch();
    }

    if (!dbase->db.tables().contains("types")) {
        qDebug() << "DB.contains : Table types does not exist";
        q.exec("CREATE TABLE types ("
                    "type_id  INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "type  TEXT(50)"
                    ");");
        q.exec("INSERT INTO types VALUES (1, 'error');"
                  "INSERT INTO types VALUES (2, 'add');"
                  "INSERT INTO types VALUES (3, 'check');");

    }

    if (!dbase->db.tables().contains("users")) {
        qDebug() << "DB.contains : Table users does not exist";
        q.exec("CREATE TABLE users ("
                        "user_id  INTEGER PRIMARY KEY AUTOINCREMENT,"
                        "user  TEXT(50)"
                        ");");
        q.exec("INSERT INTO users VALUES (1,'Laurent');INSERT INTO users VALUES (2,'Thomas');");

    }

}

MyModel *Database::tracksmodel() {
    if( dbase->db.isOpen() ) {
        QSqlQuery query(dbase->db);
        if(!query.exec("SELECT "
                   "tracks.track_id,"
                   "tracks.issue,"
                   "types.type,"
                   "levels.level,"
                   "tracks.open_date,"
                   "users_open.user AS open_user,"
                   "tracks.close_date,"
                   "users_close.user AS close_user,"
                   "tracks.comments "
                   "FROM "
                   "tracks "
                   "LEFT JOIN types ON tracks.type_id = types.type_id "
                   "LEFT JOIN users AS users_open ON tracks.open_user_id = users_open.user_id "
                   "LEFT JOIN levels ON tracks.level_id = levels.level_id "
                   "LEFT JOIN users AS users_close ON tracks.close_user_id = users_close.user_id "
                    )) {
            qDebug() << "Database::tracksmodel - Error in query";
        }

        MyModel *model = new MyModel(0);
        model->setQuery(query);
        model->setHeaderData(0,Qt::Horizontal,tr("id"));
        model->setHeaderData(1,Qt::Horizontal,tr("issue"));
        model->setHeaderData(2,Qt::Horizontal,tr("type"));
        model->setHeaderData(3,Qt::Horizontal,tr("level"));
        model->setHeaderData(4,Qt::Horizontal,tr("open date"));
        model->setHeaderData(5,Qt::Horizontal,tr("opened by"));
        model->setHeaderData(6,Qt::Horizontal,tr("close date"));
        model->setHeaderData(7,Qt::Horizontal,tr("closed by"));
        model->setHeaderData(8,Qt::Horizontal,tr("comments"));
        return model;
    } else {
        return 0;
    }
}

void Database::getTrack(int id) {
    QSqlQuery query(dbase->db);
    query.prepare("SELECT track_id, issue, type_id, level_id, open_date, "
                  "open_user_id, close_date, close_user_id, comments "
                  "FROM tracks WHERE track_id=:myID");
    query.bindValue(":myID",id);
    if(query.exec()) {
        if (query.first()) {
            // teste si aucune erreur
            qDebug() << "Database::getTrack - Edit mode";
            track.id=query.value("track_id").toInt();
            track.issue=query.value("issue").toString();
            track.type_id=query.value("type_id").toInt();
            track.level_id=query.value("level_id").toInt();
            track.open_date=query.value("open_date").toString();
            track.open_user_id=query.value("open_user_id").toInt();
            track.close_date=query.value("close_date").toString();
            track.close_user_id=query.value("close_user_id").toInt();
            track.comments=query.value("comments").toString();
            return;
        }
    }

    qDebug() << "Database::getTrack - Add mode";
    track.id=0;
    track.issue="";
    track.type_id=0;
    track.level_id=0;
    track.open_date=""; //QDate::currentDate().toString("dd-MM-yyyy");
    track.open_user_id=0;
    track.close_date=""; //QDate::currentDate().toString("dd-MM-yyyy");
    track.close_user_id=0;
    track.comments="";
}

void Database::setTrack(int id) {
    QSqlQuery query(dbase->db);

    if (id==0) {
        qDebug() << "Database::setTrack - Create";
        query.prepare("INSERT INTO tracks ("
                      "issue,"
                      "type_id,"
                      "level_id,"
                      "open_date,"
                      "open_user_id,"
                      "close_date,"
                      "close_user_id,"
                      "comments) VALUES ("
                      ":myIssue,"
                      ":myType_id,"
                      ":myLevel_id,"
                      ":myOpen_date,"
                      ":myOpen_user_id,"
                      ":myClose_date,"
                      ":myClose_user_id,"
                      ":myComments)");
    }
    else {
        qDebug() << "Database::setTrack - Update";
        query.prepare("UPDATE tracks SET "
                      "track_id=:myID,"
                      "issue=:myIssue,"
                      "type_id=:myType_id,"
                      "level_id=:myLevel_id,"
                      "open_date=:myOpen_date,"
                      "open_user_id=:myOpen_user_id,"
                      "close_date=:myClose_date,"
                      "close_user_id=:myClose_user_id,"
                      "comments=:myComments "
                      "WHERE track_id=:myID");
    }
    query.bindValue(":myID",id);
    query.bindValue(":myIssue",track.issue);
    query.bindValue(":myType_id",track.type_id);
    query.bindValue(":myLevel_id",track.level_id);
    query.bindValue(":myOpen_date",track.open_date);
    query.bindValue(":myOpen_user_id",track.open_user_id);
    query.bindValue(":myClose_date",track.close_date);
    query.bindValue(":myClose_user_id",track.close_user_id);
    query.bindValue(":myComments",track.comments);

    if(query.exec()) {
        qDebug() << "Database::setTrack : Record updated";
    }
    else {
        qDebug() << "Database::setTrack : Error";
        QMessageBox::critical(0, QObject::tr("Database Error"), query.lastError().text());
    }
}

void Database::delTrack(int id) {
    QSqlQuery query(dbase->db);
    query.prepare("DELETE FROM tracks WHERE track_id=:myID");
    query.bindValue(":myID",id);
    if(!query.exec()) {
        qDebug() << "Database::delTrack - record can't be deleted";
    }
}

QSqlQueryModel *Database::typesmodel() {
    if(dbase->db.isOpen()) {
        QSqlQuery query(dbase->db);
        if(!query.exec("SELECT types.type_id, types.type FROM types")) {
            qDebug() << "Database::typesmodel - Error in query";
        }

        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery(query);
        model->setHeaderData(0,Qt::Horizontal,tr("id"));
        model->setHeaderData(1,Qt::Horizontal,tr("type"));
        return model;
    } else {
        qDebug() << "Database::typesmodel - db is not opened";
        return 0;
    }
}

void Database::levels2combobox(QComboBox *cb) {
    QSqlQuery q;
    QIcon blue(":/icons/blue.png");
    QIcon green(":/icons/green.png");
    QIcon yellow(":/icons/yellow.png");
    QIcon red(":/icons/red.png");
    q.prepare("SELECT * FROM levels");
    q.exec();
    while (q.next()) {
        if (q.value("icon")=="blue") {
            cb->addItem(blue,q.value("level").toString(),q.value("level_id").toInt());
        } else if (q.value("icon")=="green") {
            cb->addItem(green,q.value("level").toString(),q.value("level_id").toInt());
        } else if (q.value("icon")=="yellow") {
            cb->addItem(yellow,q.value("level").toString(),q.value("level_id").toInt());
        } else if (q.value("icon")=="red") {
            cb->addItem(red,q.value("level").toString(),q.value("level_id").toInt());
        }
    }
}

void Database::users2combobox(QComboBox *cb) {
    QSqlQuery q;
    q.prepare("SELECT * FROM users");
    q.exec();
    while (q.next()) {
        cb->addItem(q.value("user").toString(),q.value("user_id").toInt());
    }
}
