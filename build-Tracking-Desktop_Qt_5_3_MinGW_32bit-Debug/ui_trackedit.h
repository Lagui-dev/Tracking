/********************************************************************************
** Form generated from reading UI file 'trackedit.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKEDIT_H
#define UI_TRACKEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_trackedit
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QComboBox *cmbLevel;
    QLineEdit *txtLevel;
    QGridLayout *gridLayout_2;
    QCheckBox *chkCloseDate;
    QDateEdit *dateClose;
    QLineEdit *txtCloseDate;
    QGridLayout *gridLayout;
    QCheckBox *chkOpenDate;
    QLineEdit *txtOpenDate;
    QDateEdit *dateOpen;
    QComboBox *cmbOpenUser;
    QLabel *label_8;
    QLabel *label_1;
    QComboBox *cmbCloseUser;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QTextEdit *txtComments;
    QComboBox *cmbType;
    QSpacerItem *horizontalSpacer;
    QTextEdit *txtIssue;
    QGroupBox *groupBox;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QLabel *label;

    void setupUi(QMainWindow *trackedit)
    {
        if (trackedit->objectName().isEmpty())
            trackedit->setObjectName(QStringLiteral("trackedit"));
        trackedit->resize(1024, 768);
        trackedit->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(trackedit);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_5 = new QGridLayout(centralwidget);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, -1);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777214, 16777215));
        QFont font;
        font.setPointSize(8);
        groupBox_2->setFont(font);
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        cmbLevel = new QComboBox(groupBox_2);
        cmbLevel->setObjectName(QStringLiteral("cmbLevel"));
        cmbLevel->setMinimumSize(QSize(133, 0));
        QFont font1;
        font1.setPointSize(12);
        cmbLevel->setFont(font1);

        gridLayout_3->addWidget(cmbLevel, 0, 0, 1, 1);

        txtLevel = new QLineEdit(groupBox_2);
        txtLevel->setObjectName(QStringLiteral("txtLevel"));
        txtLevel->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(txtLevel, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 3, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        chkCloseDate = new QCheckBox(groupBox_2);
        chkCloseDate->setObjectName(QStringLiteral("chkCloseDate"));
        chkCloseDate->setMaximumSize(QSize(25, 16777215));

        gridLayout_2->addWidget(chkCloseDate, 0, 0, 1, 1, Qt::AlignLeft);

        dateClose = new QDateEdit(groupBox_2);
        dateClose->setObjectName(QStringLiteral("dateClose"));
        dateClose->setEnabled(true);
        dateClose->setMinimumSize(QSize(250, 0));
        dateClose->setFont(font1);
        dateClose->setCalendarPopup(true);

        gridLayout_2->addWidget(dateClose, 0, 1, 1, 1);

        txtCloseDate = new QLineEdit(groupBox_2);
        txtCloseDate->setObjectName(QStringLiteral("txtCloseDate"));
        txtCloseDate->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(txtCloseDate, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 5, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        chkOpenDate = new QCheckBox(groupBox_2);
        chkOpenDate->setObjectName(QStringLiteral("chkOpenDate"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chkOpenDate->sizePolicy().hasHeightForWidth());
        chkOpenDate->setSizePolicy(sizePolicy);
        chkOpenDate->setMaximumSize(QSize(25, 16777215));
        chkOpenDate->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(chkOpenDate, 0, 0, 1, 1, Qt::AlignLeft);

        txtOpenDate = new QLineEdit(groupBox_2);
        txtOpenDate->setObjectName(QStringLiteral("txtOpenDate"));
        txtOpenDate->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txtOpenDate, 0, 2, 1, 1);

        dateOpen = new QDateEdit(groupBox_2);
        dateOpen->setObjectName(QStringLiteral("dateOpen"));
        dateOpen->setMinimumSize(QSize(250, 0));
        dateOpen->setCalendarPopup(true);

        gridLayout->addWidget(dateOpen, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 4, 1, 1, 1);

        cmbOpenUser = new QComboBox(groupBox_2);
        cmbOpenUser->setObjectName(QStringLiteral("cmbOpenUser"));
        cmbOpenUser->setMinimumSize(QSize(133, 0));
        cmbOpenUser->setFont(font1);

        gridLayout_4->addWidget(cmbOpenUser, 4, 4, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(100, 0));
        label_8->setMaximumSize(QSize(100, 16777215));
        label_8->setFont(font1);

        gridLayout_4->addWidget(label_8, 6, 0, 1, 1);

        label_1 = new QLabel(groupBox_2);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setMinimumSize(QSize(100, 0));
        label_1->setMaximumSize(QSize(100, 16777215));
        label_1->setFont(font1);

        gridLayout_4->addWidget(label_1, 0, 0, 1, 1);

        cmbCloseUser = new QComboBox(groupBox_2);
        cmbCloseUser->setObjectName(QStringLiteral("cmbCloseUser"));
        cmbCloseUser->setMinimumSize(QSize(133, 0));
        cmbCloseUser->setFont(font1);

        gridLayout_4->addWidget(cmbCloseUser, 5, 4, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(100, 0));
        label_7->setMaximumSize(QSize(100, 16777215));
        label_7->setFont(font1);

        gridLayout_4->addWidget(label_7, 5, 3, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setMaximumSize(QSize(100, 16777215));
        label_5->setFont(font1);

        gridLayout_4->addWidget(label_5, 4, 3, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setMaximumSize(QSize(100, 16777215));
        label_6->setFont(font1);

        gridLayout_4->addWidget(label_6, 5, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setFont(font1);

        gridLayout_4->addWidget(label_4, 4, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setMaximumSize(QSize(100, 16777215));
        label_3->setFont(font1);

        gridLayout_4->addWidget(label_3, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setMaximumSize(QSize(100, 16777215));
        label_2->setFont(font1);

        gridLayout_4->addWidget(label_2, 3, 3, 1, 1);

        txtComments = new QTextEdit(groupBox_2);
        txtComments->setObjectName(QStringLiteral("txtComments"));
        txtComments->setFont(font1);

        gridLayout_4->addWidget(txtComments, 6, 1, 1, 4);

        cmbType = new QComboBox(groupBox_2);
        cmbType->setObjectName(QStringLiteral("cmbType"));
        cmbType->setMinimumSize(QSize(133, 0));
        cmbType->setFont(font1);

        gridLayout_4->addWidget(cmbType, 3, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 4, 1, 1);

        txtIssue = new QTextEdit(groupBox_2);
        txtIssue->setObjectName(QStringLiteral("txtIssue"));
        txtIssue->setFont(font1);

        gridLayout_4->addWidget(txtIssue, 0, 1, 1, 4);


        gridLayout_5->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 60));
        btnOk = new QPushButton(groupBox);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        btnOk->setGeometry(QRect(10, 20, 91, 23));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(110, 20, 91, 23));

        gridLayout_5->addWidget(groupBox, 3, 0, 1, 1);

        label = new QLabel(centralwidget);
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

        gridLayout_5->addWidget(label, 1, 0, 1, 1);

        trackedit->setCentralWidget(centralwidget);
        QWidget::setTabOrder(cmbLevel, cmbOpenUser);
        QWidget::setTabOrder(cmbOpenUser, dateClose);
        QWidget::setTabOrder(dateClose, cmbCloseUser);
        QWidget::setTabOrder(cmbCloseUser, txtComments);

        retranslateUi(trackedit);

        QMetaObject::connectSlotsByName(trackedit);
    } // setupUi

    void retranslateUi(QMainWindow *trackedit)
    {
        trackedit->setWindowTitle(QApplication::translate("trackedit", "MainWindow", 0));
        groupBox_2->setTitle(QApplication::translate("trackedit", "Edit", 0));
        chkCloseDate->setText(QString());
        dateClose->setDisplayFormat(QApplication::translate("trackedit", "dd-MM-yyyy", 0));
        chkOpenDate->setText(QString());
        dateOpen->setDisplayFormat(QApplication::translate("trackedit", "dd-MM-yyyy", 0));
        label_8->setText(QApplication::translate("trackedit", "comments", 0));
        label_1->setText(QApplication::translate("trackedit", "issue", 0));
        label_7->setText(QApplication::translate("trackedit", "close user", 0));
        label_5->setText(QApplication::translate("trackedit", "open user", 0));
        label_6->setText(QApplication::translate("trackedit", "close date", 0));
        label_4->setText(QApplication::translate("trackedit", "open date", 0));
        label_3->setText(QApplication::translate("trackedit", "level", 0));
        label_2->setText(QApplication::translate("trackedit", "type", 0));
        groupBox->setTitle(QApplication::translate("trackedit", "GroupBox", 0));
        btnOk->setText(QApplication::translate("trackedit", "OK", 0));
        btnCancel->setText(QApplication::translate("trackedit", "Cancel", 0));
        label->setText(QApplication::translate("trackedit", "BUGTRACK - Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class trackedit: public Ui_trackedit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKEDIT_H
