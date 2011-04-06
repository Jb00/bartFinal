/********************************************************************************
** Form generated from reading UI file 'adduserwindow.ui'
**
** Created: Tue Apr 5 21:14:38 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERWINDOW_H
#define UI_ADDUSERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUserWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *nameLine;
    QLabel *label_2;
    QLineEdit *passwordLine;
    QLabel *label_3;
    QLineEdit *permissionLine;
    QLabel *crossImg;

    void setupUi(QMainWindow *AddUserWindow)
    {
        if (AddUserWindow->objectName().isEmpty())
            AddUserWindow->setObjectName(QString::fromUtf8("AddUserWindow"));
        AddUserWindow->resize(381, 302);
        actionExit = new QAction(AddUserWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(AddUserWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 260, 381, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        okBtn = new QPushButton(layoutWidget_2);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));

        gridLayout_2->addWidget(okBtn, 0, 0, 1, 1);

        cancelBtn = new QPushButton(layoutWidget_2);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        gridLayout_2->addWidget(cancelBtn, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 100, 361, 151));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 341, 131));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nameLine = new QLineEdit(widget);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));

        gridLayout->addWidget(nameLine, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        passwordLine = new QLineEdit(widget);
        passwordLine->setObjectName(QString::fromUtf8("passwordLine"));

        gridLayout->addWidget(passwordLine, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        permissionLine = new QLineEdit(widget);
        permissionLine->setObjectName(QString::fromUtf8("permissionLine"));

        gridLayout->addWidget(permissionLine, 2, 1, 1, 1);

        crossImg = new QLabel(centralWidget);
        crossImg->setObjectName(QString::fromUtf8("crossImg"));
        crossImg->setGeometry(QRect(290, 10, 71, 71));
        AddUserWindow->setCentralWidget(centralWidget);

        retranslateUi(AddUserWindow);

        QMetaObject::connectSlotsByName(AddUserWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddUserWindow)
    {
        AddUserWindow->setWindowTitle(QApplication::translate("AddUserWindow", "AddUserWindow", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("AddUserWindow", "Exit", 0, QApplication::UnicodeUTF8));
        okBtn->setText(QApplication::translate("AddUserWindow", "OK", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("AddUserWindow", "Cancel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddUserWindow", "User Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddUserWindow", "Password:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddUserWindow", "Permission:", 0, QApplication::UnicodeUTF8));
        crossImg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddUserWindow: public Ui_AddUserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERWINDOW_H
