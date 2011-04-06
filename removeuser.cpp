#include "removeuser.h"
#include "ui_removeuser.h"

RemoveUser::RemoveUser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RemoveUser)
{
    ui->setupUi(this);

    this->setPalette(Qt::white);

    connect(ui->searchBtn, SIGNAL(clicked()), this, SLOT(searchBtn_clicked()));
    connect(ui->removeBtn, SIGNAL(clicked()), this, SLOT(removeBtn_clicked()));
    connect(ui->okBtn, SIGNAL(clicked()), this, SLOT(okBtn_clicked()));

    aUser = new User();

    setScheme();
}

RemoveUser::~RemoveUser()
{
    delete ui;
}

void RemoveUser::okBtn_clicked(){

    ui->userLbl->clear();
    ui->permLbl->clear();
    ui->userLine->clear();

    this->close();
}

void RemoveUser::searchBtn_clicked(){


    ui->userLbl->clear();
    ui->permLbl->clear();

    QString name;
    name = ui->userLine->text();
    aUser = RemoveUserCtrl::getInstance()->searchForUser(name);

    if((!aUser) || (ui->userLine->text().isEmpty())){
        RemoveUserCtrl::getInstance()->invalid("Please enter a valid User Name.");
        ui->userLine->clear();
    }
    else{

        ui->userLbl->setText(aUser->getName());
        ui->permLbl->setText(aUser->getType());
    }

}

void RemoveUser::removeBtn_clicked(){

    QString name;
    name = ui->userLine->text();

    if(!(ui->userLbl->text().isEmpty()) && (ui->userLbl->text() == name)){

        //qDebug() << "In remove btn clicked!";
        RemoveUserCtrl::getInstance()->removeUser(aUser);
        ui->userLbl->clear();
        ui->permLbl->clear();
        ui->userLine->clear();
    }
    else{
        RemoveUserCtrl::getInstance()->invalid("Please enter a valid User Name.");
    }

}

void RemoveUser::keyPressEvent(QKeyEvent *event){

    switch(event->key()){

    case Qt::Key_Escape:
        this->close();
        break;
    }
}

void RemoveUser::setScheme(){

    QImage cross("red_cross2.png");

    ui->crossImg->setScaledContents(TRUE);
    ui->crossImg->setPixmap(QPixmap::fromImage(cross));

    QPalette btnPal(Qt::white);
    btnPal.setColor(QPalette::ButtonText, QColor(255, 255, 255));

    ui->removeBtn->setStyleSheet("background-color: red");
    ui->okBtn->setStyleSheet("background-color: red");
    ui->searchBtn->setStyleSheet("background-color: red");

    ui->removeBtn->setPalette(btnPal);
    ui->okBtn->setPalette(btnPal);
    ui->searchBtn->setPalette(btnPal);
}
