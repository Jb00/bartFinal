#include "adduserwindow.h"
#include "ui_adduserwindow.h"

AddUserWindow::AddUserWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddUserWindow)
{
    ui->setupUi(this);
    this->setPalette(Qt::white);

    connect(ui->cancelBtn, SIGNAL(pressed()), this, SLOT(on_cancelBtn_clicked()));
    connect(ui->okBtn, SIGNAL(pressed()), this, SLOT(on_okBtn_clicked()));

    setScheme();
}

AddUserWindow::~AddUserWindow(){delete ui;}

void AddUserWindow::on_okBtn_clicked(){


    userName = ui->nameLine->text();
    type = ui->permissionLine->text();
    password = ui->passwordLine->text();

    if(ui->nameLine->text().isEmpty() || ui->permissionLine->text().isEmpty() || ui->passwordLine->text().isEmpty()){
        AddUserCtrl::getInstance()->invalid();
        ui->nameLine->text().clear();
        ui->permissionLine->text().clear();
        ui->passwordLine->text().clear();
    }
    else{
        AddUserCtrl::getInstance()->setName(userName);
        AddUserCtrl::getInstance()->setType(type);
        AddUserCtrl::getInstance()->setPassword(password);

        //sleep(20);
        AddUserCtrl::getInstance()->addToDb();

        this->close();
    }


}

void AddUserWindow::setScheme(){

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

void AddUserWindow::on_cancelBtn_clicked(){this->close();}

void AddUserWindow::keyPressEvent(QKeyEvent *event){

    switch(event->key()){

    case Qt::Key_Escape:
        this->close();
        break;

    }
}


