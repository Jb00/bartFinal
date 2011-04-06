/********************************************************************************
** Form generated from reading UI file 'removeuser.ui'
**
** Created: Tue Apr 5 21:14:38 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEUSER_H
#define UI_REMOVEUSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveUser
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *userLine;
    QPushButton *searchBtn;
    QLabel *label;
    QLabel *crossImg;
    QFrame *frame_2;
    QFrame *frame_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *removeBtn;
    QPushButton *okBtn;
    QFrame *frame_4;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *userLbl;
    QLabel *label_5;
    QLabel *permLbl;
    QLabel *label_3;

    void setupUi(QMainWindow *RemoveUser)
    {
        if (RemoveUser->objectName().isEmpty())
            RemoveUser->setObjectName(QString::fromUtf8("RemoveUser"));
        RemoveUser->resize(531, 329);
        centralwidget = new QWidget(RemoveUser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 90, 511, 71));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 491, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        userLine = new QLineEdit(widget);
        userLine->setObjectName(QString::fromUtf8("userLine"));

        horizontalLayout->addWidget(userLine);

        searchBtn = new QPushButton(widget);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));

        horizontalLayout->addWidget(searchBtn);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 60, 51, 17));
        crossImg = new QLabel(centralwidget);
        crossImg->setObjectName(QString::fromUtf8("crossImg"));
        crossImg->setGeometry(QRect(430, 10, 71, 71));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(9, 210, 511, 111));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(370, 20, 131, 71));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 95, 51));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        removeBtn = new QPushButton(layoutWidget);
        removeBtn->setObjectName(QString::fromUtf8("removeBtn"));

        gridLayout->addWidget(removeBtn, 0, 0, 1, 1);

        okBtn = new QPushButton(layoutWidget);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));

        gridLayout->addWidget(okBtn, 1, 0, 1, 1);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(10, 20, 361, 71));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        layoutWidget_2 = new QWidget(frame_4);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 341, 51));
        formLayout = new QFormLayout(layoutWidget_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        userLbl = new QLabel(layoutWidget_2);
        userLbl->setObjectName(QString::fromUtf8("userLbl"));

        formLayout->setWidget(0, QFormLayout::FieldRole, userLbl);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        permLbl = new QLabel(layoutWidget_2);
        permLbl->setObjectName(QString::fromUtf8("permLbl"));

        formLayout->setWidget(1, QFormLayout::FieldRole, permLbl);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 170, 51, 20));
        RemoveUser->setCentralWidget(centralwidget);

        retranslateUi(RemoveUser);

        QMetaObject::connectSlotsByName(RemoveUser);
    } // setupUi

    void retranslateUi(QMainWindow *RemoveUser)
    {
        RemoveUser->setWindowTitle(QApplication::translate("RemoveUser", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RemoveUser", "User Name:", 0, QApplication::UnicodeUTF8));
        searchBtn->setText(QApplication::translate("RemoveUser", "Search", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RemoveUser", "Search", 0, QApplication::UnicodeUTF8));
        crossImg->setText(QString());
        removeBtn->setText(QApplication::translate("RemoveUser", "Remove", 0, QApplication::UnicodeUTF8));
        okBtn->setText(QApplication::translate("RemoveUser", "OK", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RemoveUser", "User Name:", 0, QApplication::UnicodeUTF8));
        userLbl->setText(QString());
        label_5->setText(QApplication::translate("RemoveUser", "Permissions:", 0, QApplication::UnicodeUTF8));
        permLbl->setText(QString());
        label_3->setText(QApplication::translate("RemoveUser", "Results", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RemoveUser: public Ui_RemoveUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEUSER_H
