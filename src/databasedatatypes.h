#ifndef DATABASEDATATYPES_H
#define DATABASEDATATYPES_H

#include <QDate>
#include <QObject>

class Tracks
{
public:
    Tracks();

    int id;
    QString issue;
    int type_id;
    int level_id;
    QString open_date;
    int open_user_id;
    QString close_date;
    int close_user_id;
    QString comments;

private:

};



class Levels
{
public:
    Levels();

    int id;
    QString level;
private:

};

#endif // DATABASEDATATYPES_H
