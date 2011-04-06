#include "addfacility.h"
#include "ui_addfacility.h"

#include <QDialog>

AddFacility::AddFacility(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddFacility)
{
    ui->setupUi(this);

    connect(ui->cancelBtn, SIGNAL(pressed()), this, SLOT(cancelBtn_clicked()));
    connect(ui->okBtn, SIGNAL(pressed()), this, SLOT(okBtn_clicked()));
    connect(ui->hospitalRadio, SIGNAL(toggled(bool)), this, SLOT(typeRadio_selected()));
    connect(ui->nursingRadio, SIGNAL(toggled(bool)), this, SLOT(typeRadio_selected()));

    ui->acuteLine->setDisabled(true);
    ui->complexLine->setDisabled(true);
    ui->longLine->setDisabled(true);

    colorList = new QList<QColor>();

    colorList->append(QColor("#F2FCC2"));
    colorList->append(QColor("#FCCDB6"));
    colorList->append(QColor("#b3f3fc"));
    colorList->append(QColor("#fcc5ea"));
    colorList->append(QColor("#b8b3fc"));
    colorList->append(QColor("#b6fcb3"));
    colorList->append(QColor("#f2f1f0"));



    setScheme();
}

AddFacility::~AddFacility(){delete ui;}

void AddFacility::okBtn_clicked(){




    name = ui->nameLine->text();
    id = ui->idLine->text().toInt();
    xCoord = ui->xLine->text().toInt();
    yCoord = ui->yLine->text().toInt();
    AC = ui->acuteLine->text().toInt();
    CCC=ui->complexLine->text().toInt();
    LTC=ui->longLine->text().toInt();
    qDebug() <<CCC;


    if((name == "") || (id == 0) || (xCoord == 0) || (yCoord == 0) || ((AC == 0) && (CCC == 0) && (LTC == 0))){

       AddFacCtrl::getInstance()->invalid();
    }
    else{

        //Set value into the controller from the UI
        AddFacCtrl::getInstance()->setId(id);
        AddFacCtrl::getInstance()->setName(name);
        AddFacCtrl::getInstance()->setX(xCoord);
        AddFacCtrl::getInstance()->setY(yCoord);
        AddFacCtrl::getInstance()->setAC(AC);
        AddFacCtrl::getInstance()->setCCC(CCC);
        AddFacCtrl::getInstance()->setLTC(LTC);

        //determineIcon();
        //qDebug() << "AC before adToDb: " << AddFacCtrl::getInstance()->getAC();
        AddFacCtrl::getInstance()->addToDb();
        //update();
        this->close();
    }
}

void AddFacility::cancelBtn_clicked(){this->close();}

void AddFacility::keyPressEvent(QKeyEvent *event){

    switch(event->key()){

    case Qt::Key_Escape:
        this->close();
        break;
    }
}

void AddFacility::typeRadio_selected(){

    if(ui->hospitalRadio->isChecked()){

        ui->acuteLine->setEnabled(true);
        ui->complexLine->setEnabled(true);
        ui->longLine->setDisabled(true);
        ui->longLine->setText("0");
    }
    else{

        ui->longLine->setEnabled(true);
        ui->acuteLine->setDisabled(true);
        ui->acuteLine->setText("0");
        ui->complexLine->setDisabled(true);
        ui->complexLine->setText("0");
    }

}

void AddFacility::setScheme(){

    this->setPalette(Qt::white);

    QImage cross("red_cross2.png");
    ui->crossImg->setScaledContents(TRUE);
    ui->crossImg->setPixmap(QPixmap::fromImage(cross));

    QPalette btnPal(Qt::white);
    btnPal.setColor(QPalette::ButtonText, QColor(255, 255, 255));

    ui->okBtn->setStyleSheet("background-color: red");
    ui->cancelBtn->setStyleSheet("background-color: red");

    ui->okBtn->setPalette(btnPal);
    ui->cancelBtn->setPalette(btnPal);
}

void AddFacility::addCoord(int x, int y){

    QString xStr;
    QString yStr;

    xStr.setNum(x);
    yStr.setNum(y);
    ui->xLine->setText(xStr);
    ui->yLine->setText(yStr);
    ui->xLine->setDisabled(true);
    ui->yLine->setDisabled(true);
}


void AddFacility::determineArea(QColor aColor){

    QList<QColor>::iterator i;
    for (i = colorList->begin(); i != colorList->end(); ++i){

        if(aColor == *i){

            if(aColor.toRgb().name().toStdString() == "#f2fcc2"){
                area = 0;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#fccdb6"){
                area = 1;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#b3f3fc"){
                area = 2;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#fcc5ea"){
                area = 3;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#b8b3fc"){
                area = 4;
                break;
            }
            else{
                area = 5;
                break;
            }
        }
    }

}







