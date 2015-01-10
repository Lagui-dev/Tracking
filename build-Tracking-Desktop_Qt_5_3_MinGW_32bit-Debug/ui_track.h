/********************************************************************************
** Form generated from reading UI file 'track.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACK_H
#define UI_TRACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_track
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnModify;
    QPushButton *btnDelete;
    QPushButton *btnPrint;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRefresh;
    QPushButton *btnTheme;
    QPushButton *btnClose;

    void setupUi(QWidget *track)
    {
        if (track->objectName().isEmpty())
            track->setObjectName(QStringLiteral("track"));
        track->resize(1024, 768);
        gridLayout = new QGridLayout(track);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, -1);
        label = new QLabel(track);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("     padding: 5 5 5 5;\n"
"\n"
"	font-family: Calibri, Candara, Segoe, \"Segoe UI\", Optima, Arial, sans-serif;\n"
"	color: #FFFFFF;\n"
"	font-size: 20px;\n"
"	padding: 5;\n"
"	letter-spacing: 3px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:0, y2:1, stop:0 rgba(169, 3, 41, 1), stop:1 rgba(109, 0, 25, 1));\n"
"\n"
""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        groupBox = new QGroupBox(track);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        btnAdd = new QPushButton(groupBox);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        horizontalLayout->addWidget(btnAdd);

        btnModify = new QPushButton(groupBox);
        btnModify->setObjectName(QStringLiteral("btnModify"));

        horizontalLayout->addWidget(btnModify);

        btnDelete = new QPushButton(groupBox);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        horizontalLayout->addWidget(btnDelete);

        btnPrint = new QPushButton(groupBox);
        btnPrint->setObjectName(QStringLiteral("btnPrint"));

        horizontalLayout->addWidget(btnPrint);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnRefresh = new QPushButton(groupBox);
        btnRefresh->setObjectName(QStringLiteral("btnRefresh"));

        horizontalLayout->addWidget(btnRefresh);

        btnTheme = new QPushButton(groupBox);
        btnTheme->setObjectName(QStringLiteral("btnTheme"));

        horizontalLayout->addWidget(btnTheme);

        btnClose = new QPushButton(groupBox);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        QWidget::setTabOrder(tableView, btnAdd);
        QWidget::setTabOrder(btnAdd, btnModify);
        QWidget::setTabOrder(btnModify, btnDelete);
        QWidget::setTabOrder(btnDelete, btnPrint);
        QWidget::setTabOrder(btnPrint, btnTheme);
        QWidget::setTabOrder(btnTheme, btnClose);

        retranslateUi(track);

        QMetaObject::connectSlotsByName(track);
    } // setupUi

    void retranslateUi(QWidget *track)
    {
        track->setWindowTitle(QApplication::translate("track", "track", 0));
        label->setText(QApplication::translate("track", "BUGTRACK", 0));
        groupBox->setTitle(QApplication::translate("track", "View", 0));
        btnAdd->setText(QApplication::translate("track", "Add", 0));
        btnModify->setText(QApplication::translate("track", "Modify", 0));
        btnDelete->setText(QApplication::translate("track", "Delete", 0));
        btnPrint->setText(QApplication::translate("track", "Print", 0));
        btnRefresh->setText(QApplication::translate("track", "Refresh", 0));
        btnTheme->setText(QApplication::translate("track", "Theme", 0));
        btnClose->setText(QApplication::translate("track", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class track: public Ui_track {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACK_H
