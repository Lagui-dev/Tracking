#ifndef TRACKEDIT_H
#define TRACKEDIT_H

#include <QMainWindow>
#include "database.h"

namespace Ui {
class trackedit;
}

class trackedit : public QMainWindow
{
    Q_OBJECT

public:
    explicit trackedit(QWidget *parent = 0, Database *db = 0, int idx = 0);
    ~trackedit();

    void track2form();
    void form2track();

private slots:
    void on_cmbLevel_currentIndexChanged(int index);
    void on_btnOk_clicked();
    void on_btnCancel_clicked();
    void on_chkOpenDate_toggled(bool checked);


    void on_chkCloseDate_toggled(bool checked);

    void on_dateOpen_dateChanged(const QDate &date);

    void on_dateClose_dateChanged(const QDate &date);

private:
    Ui::trackedit *ui;
    Database *db;

signals:
    void JeTeste(int idx);
};

#endif // TRACKEDIT_H
