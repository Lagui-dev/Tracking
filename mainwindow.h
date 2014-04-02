#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    bool Opendatabase();
    void Requete();
    void MessageBox(QString msg);
    void InsertMethode1();
    void InsertMethode2();
    void TableModele();
    void TableModeleView();
};

#endif // MAINWINDOW_H
