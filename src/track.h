#ifndef TRACK_H
#define TRACK_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QWidget>
#include <QtSql>
#include <QPrinter>

#include <database.h>

namespace Ui {
class track;
}

class track : public QWidget
{
    Q_OBJECT

public:
    explicit track(QWidget *parent = 0);
    ~track();
    Database *db;

private slots:
    void on_btnClose_clicked();
    void on_btnAdd_clicked();
    void on_btnTheme_clicked();
    void on_btnModify_clicked();
    void on_btnDelete_clicked();
    void on_btnPrint_clicked();
    void on_btnRefresh_clicked();

    void ColorTableView();
    void print(QPrinter *p);

public slots:
    void JeTesteBien(int idx);

private:
    Ui::track *ui;

};

#endif // TRACK_H
