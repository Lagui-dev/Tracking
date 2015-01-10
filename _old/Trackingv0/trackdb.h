#ifndef TRACKDB_H
#define TRACKDB_H

#include <QObject>
#include <QtSql>
#include <QMessageBox>
#include <QDebug>

class trackdb : public QObject
{
    Q_OBJECT

public:
    explicit trackdb(QWidget *parent = 0);
    ~trackdb();

    QSqlError initDb();
    void showError(const QSqlError &err);

private:
    QWidget *widget;
};

#endif // TRACKDB_H
