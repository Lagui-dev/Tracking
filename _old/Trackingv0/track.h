#ifndef TRACK_H
#define TRACK_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QWidget>
#include <QtSql>

namespace Ui {
class track;
}

class track : public QWidget
{
    Q_OBJECT

public:
    explicit track(QWidget *parent = 0);
    ~track();

private slots:
    void on_btnClose_clicked();
    void updateButtons(int row);
    void model2text(QModelIndex current, QModelIndex previous);

    void on_pushButton_clicked();

    void on_btnAdd_clicked();

private:
    Ui::track *ui;
    QSqlRelationalTableModel *model;
    int levelIdx, typeIdx, openuserIdx, closeuserIdx;
};

#endif // TRACK_H
