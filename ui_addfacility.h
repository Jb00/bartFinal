/********************************************************************************
** Form generated from reading UI file 'addfacility.ui'
**
** Created: Tue Apr 5 21:14:38 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFACILITY_H
#define UI_ADDFACILITY_H

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
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddFacility
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QLabel *label_8;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLineEdit *acuteLine;
    QLabel *label_13;
    QLineEdit *complexLine;
    QLabel *label_14;
    QLineEdit *longLine;
    QFrame *frame;
    QLabel *label_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *hospitalRadio;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *nursingRadio;
    QSpacerItem *horizontalSpacer_5;
    QLabel *crossImg;
    QFrame *frame_3;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *nameLine;
    QLabel *label_2;
    QLineEdit *idLine;
    QLabel *label_3;
    QLineEdit *xLine;
    QLabel *label_5;
    QLineEdit *yLine;

    void setupUi(QMainWindow *AddFacility)
    {
        if (AddFacility->objectName().isEmpty())
            AddFacility->setObjectName(QString::fromUtf8("AddFacility"));
        AddFacility->resize(410, 541);
        centralWidget = new QWidget(AddFacility);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 500, 411, 31));
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

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 190, 391, 131));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(140, 0, 111, 21));
        widget = new QWidget(frame_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 371, 95));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        acuteLine = new QLineEdit(widget);
        acuteLine->setObjectName(QString::fromUtf8("acuteLine"));

        gridLayout_3->addWidget(acuteLine, 0, 1, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 1, 0, 1, 1);

        complexLine = new QLineEdit(widget);
        complexLine->setObjectName(QString::fromUtf8("complexLine"));

        gridLayout_3->addWidget(complexLine, 1, 1, 1, 1);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 2, 0, 1, 1);

        longLine = new QLineEdit(widget);
        longLine->setObjectName(QString::fromUtf8("longLine"));

        gridLayout_3->addWidget(longLine, 2, 1, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 100, 391, 81));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 10, 101, 21));
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 40, 391, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        hospitalRadio = new QRadioButton(layoutWidget);
        hospitalRadio->setObjectName(QString::fromUtf8("hospitalRadio"));

        horizontalLayout_2->addWidget(hospitalRadio);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        nursingRadio = new QRadioButton(layoutWidget);
        nursingRadio->setObjectName(QString::fromUtf8("nursingRadio"));

        horizontalLayout_2->addWidget(nursingRadio);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        layoutWidget->raise();
        label_4->raise();
        crossImg = new QLabel(centralWidget);
        crossImg->setObjectName(QString::fromUtf8("crossImg"));
        crossImg->setGeometry(QRect(290, 10, 71, 71));
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 330, 391, 161));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        widget1 = new QWidget(frame_3);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 10, 371, 141));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nameLine = new QLineEdit(widget1);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));

        gridLayout->addWidget(nameLine, 0, 1, 1, 1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        idLine = new QLineEdit(widget1);
        idLine->setObjectName(QString::fromUtf8("idLine"));

        gridLayout->addWidget(idLine, 1, 1, 1, 1);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        xLine = new QLineEdit(widget1);
        xLine->setObjectName(QString::fromUtf8("xLine"));

        gridLayout->addWidget(xLine, 2, 1, 1, 1);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        yLine = new QLineEdit(widget1);
        yLine->setObjectName(QString::fromUtf8("yLine"));

        gridLayout->addWidget(yLine, 3, 1, 1, 1);

        AddFacility->setCentralWidget(centralWidget);

        retranslateUi(AddFacility);

        QMetaObject::connectSlotsByName(AddFacility);
    } // setupUi

    void retranslateUi(QMainWindow *AddFacility)
    {
        AddFacility->setWindowTitle(QApplication::translate("AddFacility", "AddFacility", 0, QApplication::UnicodeUTF8));
        okBtn->setText(QApplication::translate("AddFacility", "OK", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("AddFacility", "Cancel", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("AddFacility", "Number of Beds", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AddFacility", "Acute Care:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("AddFacility", "Complex Care:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("AddFacility", "Long Term Care:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddFacility", "Type of Facility", 0, QApplication::UnicodeUTF8));
        hospitalRadio->setText(QApplication::translate("AddFacility", "Hospital", 0, QApplication::UnicodeUTF8));
        nursingRadio->setText(QApplication::translate("AddFacility", "Nursing Home", 0, QApplication::UnicodeUTF8));
        crossImg->setText(QString());
        label->setText(QApplication::translate("AddFacility", "Facility Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddFacility", "Facility ID", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddFacility", "X Coordinate", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AddFacility", "Y Coordinate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddFacility: public Ui_AddFacility {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFACILITY_H
