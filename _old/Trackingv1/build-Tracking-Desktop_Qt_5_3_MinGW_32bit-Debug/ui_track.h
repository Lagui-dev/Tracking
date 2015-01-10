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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_track
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_1;
    QComboBox *cmbLevel;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_4;
    QDateEdit *dateClose;
    QLabel *label_5;
    QLabel *label_2;
    QComboBox *cmbOpenUser;
    QComboBox *cmbCloseUser;
    QLabel *label_7;
    QComboBox *cmbType;
    QDateEdit *dateOpen;
    QPlainTextEdit *txtIssue;
    QPlainTextEdit *txtComments;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnModify;
    QPushButton *btnDelete;
    QPushButton *btnPrint;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnPrevious;
    QPushButton *btnNext;
    QPushButton *pushButton;
    QPushButton *btnClose;

    void setupUi(QWidget *track)
    {
        if (track->objectName().isEmpty())
            track->setObjectName(QStringLiteral("track"));
        track->resize(1024, 768);
        horizontalLayout_2 = new QHBoxLayout(track);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox = new QGroupBox(track);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 301));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_1 = new QLabel(groupBox_2);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setMinimumSize(QSize(100, 0));
        label_1->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        cmbLevel = new QComboBox(groupBox_2);
        cmbLevel->setObjectName(QStringLiteral("cmbLevel"));
        cmbLevel->setMinimumSize(QSize(133, 0));

        gridLayout->addWidget(cmbLevel, 2, 2, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(100, 0));
        label_8->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(label_8, 5, 0, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        dateClose = new QDateEdit(groupBox_2);
        dateClose->setObjectName(QStringLiteral("dateClose"));

        gridLayout->addWidget(dateClose, 4, 2, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(label_5, 3, 3, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cmbOpenUser = new QComboBox(groupBox_2);
        cmbOpenUser->setObjectName(QStringLiteral("cmbOpenUser"));
        cmbOpenUser->setMinimumSize(QSize(133, 0));

        gridLayout->addWidget(cmbOpenUser, 3, 4, 1, 1);

        cmbCloseUser = new QComboBox(groupBox_2);
        cmbCloseUser->setObjectName(QStringLiteral("cmbCloseUser"));
        cmbCloseUser->setMinimumSize(QSize(133, 0));

        gridLayout->addWidget(cmbCloseUser, 4, 4, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(100, 0));
        label_7->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(label_7, 4, 3, 1, 1);

        cmbType = new QComboBox(groupBox_2);
        cmbType->setObjectName(QStringLiteral("cmbType"));
        cmbType->setMinimumSize(QSize(133, 0));

        gridLayout->addWidget(cmbType, 1, 2, 1, 1);

        dateOpen = new QDateEdit(groupBox_2);
        dateOpen->setObjectName(QStringLiteral("dateOpen"));

        gridLayout->addWidget(dateOpen, 3, 2, 1, 1);

        txtIssue = new QPlainTextEdit(groupBox_2);
        txtIssue->setObjectName(QStringLiteral("txtIssue"));

        gridLayout->addWidget(txtIssue, 0, 2, 1, 3);

        txtComments = new QPlainTextEdit(groupBox_2);
        txtComments->setObjectName(QStringLiteral("txtComments"));

        gridLayout->addWidget(txtComments, 5, 2, 1, 3);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
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

        btnPrevious = new QPushButton(groupBox);
        btnPrevious->setObjectName(QStringLiteral("btnPrevious"));

        horizontalLayout->addWidget(btnPrevious);

        btnNext = new QPushButton(groupBox);
        btnNext->setObjectName(QStringLiteral("btnNext"));

        horizontalLayout->addWidget(btnNext);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        btnClose = new QPushButton(groupBox);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(groupBox);

        QWidget::setTabOrder(tableView, txtIssue);
        QWidget::setTabOrder(txtIssue, cmbType);
        QWidget::setTabOrder(cmbType, cmbLevel);
        QWidget::setTabOrder(cmbLevel, dateOpen);
        QWidget::setTabOrder(dateOpen, dateClose);
        QWidget::setTabOrder(dateClose, txtComments);
        QWidget::setTabOrder(txtComments, cmbOpenUser);
        QWidget::setTabOrder(cmbOpenUser, cmbCloseUser);
        QWidget::setTabOrder(cmbCloseUser, btnAdd);
        QWidget::setTabOrder(btnAdd, btnModify);
        QWidget::setTabOrder(btnModify, btnDelete);
        QWidget::setTabOrder(btnDelete, btnPrint);
        QWidget::setTabOrder(btnPrint, btnPrevious);
        QWidget::setTabOrder(btnPrevious, btnNext);
        QWidget::setTabOrder(btnNext, pushButton);
        QWidget::setTabOrder(pushButton, btnClose);

        retranslateUi(track);

        QMetaObject::connectSlotsByName(track);
    } // setupUi

    void retranslateUi(QWidget *track)
    {
        track->setWindowTitle(QApplication::translate("track", "track", 0));
        groupBox->setTitle(QApplication::translate("track", "View", 0));
        groupBox_2->setTitle(QApplication::translate("track", "Edit", 0));
        label_3->setText(QApplication::translate("track", "level", 0));
        label_1->setText(QApplication::translate("track", "Issue", 0));
        label_8->setText(QApplication::translate("track", "comments", 0));
        label_6->setText(QApplication::translate("track", "close date", 0));
        label_4->setText(QApplication::translate("track", "open date", 0));
        dateClose->setDisplayFormat(QApplication::translate("track", "dd-MM-yyyy", 0));
        label_5->setText(QApplication::translate("track", "open user", 0));
        label_2->setText(QApplication::translate("track", "type", 0));
        label_7->setText(QApplication::translate("track", "close user", 0));
        dateOpen->setDisplayFormat(QApplication::translate("track", "dd-MM-yyyy", 0));
        btnAdd->setText(QApplication::translate("track", "Add", 0));
        btnModify->setText(QApplication::translate("track", "Modify", 0));
        btnDelete->setText(QApplication::translate("track", "Delete", 0));
        btnPrint->setText(QApplication::translate("track", "Print", 0));
        btnPrevious->setText(QApplication::translate("track", "Previous", 0));
        btnNext->setText(QApplication::translate("track", "Next", 0));
        pushButton->setText(QApplication::translate("track", "Theme", 0));
        btnClose->setText(QApplication::translate("track", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class track: public Ui_track {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACK_H
