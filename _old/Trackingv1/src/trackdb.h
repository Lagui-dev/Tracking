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

    bool connected;
    QSqlDatabase db;

private:
    QWidget *widget;
    void createTable(QString myQueryStr, const QSqlDatabase &db);
    void ExecQuery(QString myQuerystr, const QSqlDatabase &db);
};

#endif // TRACKDB_H
