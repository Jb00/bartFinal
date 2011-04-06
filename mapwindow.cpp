#include "mapwindow.h"
#include "ui_mapwindow.h"
#include "mapwinctrl.h"
#include "MessageController.h"
//#include "loginwindowctrl.h"


MapWindow::MapWindow(const QString &filePath, QString perm): ui(new Ui::MapWindow)
{
    renderer = new QSvgRenderer(filePath);

    ui->setupUi(this);
    this->setMouseTracking(true);

    ui->menuFile->addAction(ui->actionLogout);
    ui->menuAdmin->addAction(ui->actionAdd_newUser);
    ui->menuAdmin->addAction(ui->actionRemove_User);
    ui->menuReport->addAction(ui->actionGenerate);
    ui->menuFacility->addAction(ui->actionHospital);
    ui->menuFacility->addAction(ui->actionNursing_Home);
    ui->menuFacility->addAction(ui->actionView_All);
    ui->menuAvailable_Beds->addAction(ui->actionAcute_Care);
    ui->menuAvailable_Beds->addAction(ui->actionComplex_Continuing_Care);
    ui->menuAvailable_Beds->addAction(ui->actionLong_Term_Care);

    connect(ui->actionLogout, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionAdd_newUser, SIGNAL(triggered()), this, SLOT(createUser_clicked()));
    connect(ui->actionCreate_Facility, SIGNAL(triggered()), this, SLOT(createFac_clicked()));
    connect(ui->actionRemove_User, SIGNAL(triggered()), this, SLOT(removeUser_clicked()));
    connect(ui->actionGenerate, SIGNAL(triggered()), this, SLOT(generateReport_clicked()));
    connect(ui->actionHospital, SIGNAL(triggered()), this, SLOT(viewHospitals_clicked()));
    connect(ui->actionNursing_Home, SIGNAL(triggered()), this, SLOT(viewNursing_clicked()));
    connect(ui->actionView_All, SIGNAL(triggered()), this, SLOT(viewAll_clicked()));
    connect(ui->actionAcute_Care, SIGNAL(triggered()), this, SLOT(acBeds_clicked()));
    connect(ui->actionComplex_Continuing_Care, SIGNAL(triggered()), this, SLOT(cccBeds_clicked()));
    connect(ui->actionLong_Term_Care, SIGNAL(triggered()), this, SLOT(ltcBeds_clicked()));

    colorList = new QList<QColor>();

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000);

    permissions = perm;

    if(perm == "facility"){
        ui->menuAdmin->setDisabled(true);
        ui->menuReport->setDisabled(true);
    }
    else if(perm == "lhin"){
        ui->menuAdmin->setDisabled(true);
    }

}

MapWindow::~MapWindow(){delete ui;}

void MapWindow::createUser_clicked(){MapWinCtrl::getInstance()->goToAddUser();}

void MapWindow::createFac_clicked(){
    QPoint aPnt;
    QColor aColor;
    MapWinCtrl::getInstance()->goToAddFac(aPnt, NULL, aColor);
}

void MapWindow::generateReport_clicked(){MapWinCtrl::getInstance()->goToGenerate();}
void MapWindow::removeUser_clicked(){MapWinCtrl::getInstance()->goToRemoveUser();}

void MapWindow::paintEvent(QPaintEvent *event)
 {
     Q_UNUSED(event)
     QPainter painter(this);
     renderer->render(&painter);

     int innerSize = 0;
     int outerSize = 0;

     QList<Facility*> paintList ;

     switch(type){

     case 0:
         paintList = hospitalList;
         break;

     case 1:
         paintList = nursingList;
         break;

     case 2:
         paintList = availableAC;
         break;

     case 3:
         paintList = availableCCC;
         break;

     case 4:
         paintList = availableLTC;
         break;

     default:
         paintList = MapWinCtrl::getInstance()->listOfFacility;

     }

     if(!(paintList.isEmpty())){

         for(int i = 0; i < paintList.size(); i++){

             QPoint aPnt;
             aPnt.setX(paintList.at(i)->getX());
             aPnt.setY(paintList.at(i)->getY());


             if(paintList.at(i)->getTotalLTC() <= 0
                && paintList.at(i)->getTotalAC() > paintList.at(i)->getTotalCCC()){

                 if(paintList.at(i)->getTotalCCC() <= 0){
                     outerSize = ((paintList.at(i)->getTotalAC()) * 5);
                     innerSize = outerSize/2;

                 }
                 else{

                     outerSize = ((paintList.at(i)->getTotalAC()/paintList.at(i)->getTotalCCC()) * 5);
                     innerSize = ((paintList.at(i)->getTotalAC()/paintList.at(i)->getTotalCCC()) * 5)/2;

                 }

                 if(outerSize > 10){
                     outerSize = 10;
                     innerSize = 5;
                 }
                 if(outerSize < 4){
                     outerSize = 4;
                     innerSize = 2;
                 }

                QColor temp;
                QColor temp2;

                int outer = 0;
                int inner = 0;

                //qDebug() << "Paintlist size acute: " << paintList.at(i)->getSizeAcute();
                //qDebug() << "Paintlist size acute: " << paintList.at(i)->getSizeAvailableAcute();
                outer = (paintList.at(i)->getSizeAcute() - paintList.at(i)->getSizeAvailableAcute()) * 0.1;
                inner = (paintList.at(i)->getSizeComplex() - paintList.at(i)->getSizeAvailableComplex()) * 0.1;

                temp.setRgb(outer, 255 - outer, 0, 255);
                temp2.setRgb(inner, 255 - inner, 0, 255);

                 painter.setBrush(temp);
                 painter.setPen(temp);


                 painter.drawEllipse(aPnt, outerSize, outerSize);

                 painter.setBrush(temp2);
                 painter.setPen(temp2);
                 painter.drawEllipse(aPnt, innerSize, innerSize);
             }
             else if(paintList.at(i)->getTotalLTC() <= 0
                && paintList.at(i)->getTotalAC() < paintList.at(i)->getTotalCCC()){

                 if(paintList.at(i)->getTotalAC() <= 0){
                     outerSize = ((paintList.at(i)->getTotalCCC()) * 5);
                     innerSize = outerSize/2;

                 }
                 else{
                     innerSize = ((paintList.at(i)->getTotalCCC()/paintList.at(i)->getTotalAC()) * 5)/2;
                     outerSize = ((paintList.at(i)->getTotalCCC()/paintList.at(i)->getTotalAC()) * 5);
                 }

                 if(outerSize > 10){
                     outerSize = 10;
                     innerSize = 5;
                 }
                 if(outerSize < 4){
                     outerSize = 4;
                     innerSize = 2;
                 }


                 QColor temp;
                 QColor temp2;

                 int outer = 0;
                 int inner = 0;

                 //qDebug() << "Paintlist size acute: " << paintList.at(i)->getSizeAcute();

                 inner = (paintList.at(i)->getSizeAcute() - paintList.at(i)->getSizeAvailableAcute()) * 0.1;
                 outer = (paintList.at(i)->getSizeComplex() - paintList.at(i)->getSizeAvailableComplex()) * 0.1;

                 temp.setRgb(outer, 255 - outer, 0, 255);
                 temp2.setRgb(inner, 255 - inner, 0, 255);

                  painter.setBrush(temp);
                  painter.setPen(temp);
                  painter.drawEllipse(aPnt, outerSize, outerSize);

                  painter.setBrush(temp2);
                  painter.setPen(temp2);
                  painter.drawEllipse(aPnt, innerSize, innerSize);
             }
             else if(paintList.at(i)->getTotalLTC() > 0
                     && paintList.at(i)->getTotalLTC() <= (paintList.at(i)->getTotalLTC())/4){

                 painter.setBrush(Qt::black);
                 painter.setPen(Qt::black);
                 painter.drawEllipse(aPnt, 4, 4);

             }
             else if(paintList.at(i)->getTotalLTC() > (paintList.at(i)->getTotalLTC())/4
                     && paintList.at(i)->getTotalLTC() <= (paintList.at(i)->getTotalLTC())/2){

                 painter.setBrush(Qt::black);
                 painter.setPen(Qt::black);
                 painter.drawEllipse(aPnt, 6, 6);

             }
             else if(paintList.at(i)->getTotalLTC() > (paintList.at(i)->getTotalLTC())/2
                     && paintList.at(i)->getTotalLTC() <= ((paintList.at(i)->getTotalLTC()) * 3)/4){

                 painter.setBrush(Qt::black);
                 painter.setPen(Qt::black);
                 painter.drawEllipse(aPnt, 8, 8);

             }
             else if(paintList.at(i)->getTotalLTC() > ((paintList.at(i)->getTotalLTC()) * 3)/4){


                 painter.setBrush(Qt::black);
                 painter.setPen(Qt::black);
                 painter.drawEllipse(aPnt, 10, 10);

             }
             else if(paintList.at(i)->getSizeAvailableAcute() == paintList.at(i)->getSizeAvailableComplex()){

                 if(paintList.at(i)->getTotalAC() > 0
                         && paintList.at(i)->getTotalAC() <= (paintList.at(i)->getTotalAC())/4){

                     painter.setPen(Qt::DashLine);
                     painter.setBrush(Qt::blue);
                     painter.setPen(Qt::black);
                     painter.drawEllipse(aPnt, 4, 4);

                 }
                 else if(paintList.at(i)->getTotalAC() > (paintList.at(i)->getTotalAC())/4
                         && paintList.at(i)->getTotalAC() <= (paintList.at(i)->getTotalAC())/2){

                     painter.setPen(Qt::DashLine);
                     painter.setBrush(Qt::blue);
                     painter.setPen(Qt::black);
                     painter.drawEllipse(aPnt, 6, 6);

                 }
                 else if(paintList.at(i)->getTotalAC() > (paintList.at(i)->getTotalAC())/2
                         && paintList.at(i)->getTotalAC() <= ((paintList.at(i)->getTotalAC()) * 3)/4){

                     painter.setPen(Qt::DashLine);
                     painter.setBrush(Qt::blue);
                     painter.setPen(Qt::black);
                     painter.drawEllipse(aPnt, 8, 8);

                 }
                 else if(paintList.at(i)->getTotalAC() > ((paintList.at(i)->getTotalAC()) * 3)/4){


                     painter.setPen(Qt::DashLine);
                     painter.setBrush(Qt::blue);
                     painter.setPen(Qt::black);
                     painter.drawEllipse(aPnt, 10, 10);

                 }
             }

         }
     }
 }

void MapWindow::logout_clicked(){this->close();}

void MapWindow::keyPressEvent(QKeyEvent *event){

    switch(event->key()){

    case Qt::Key_Escape:
        qApp->quit();
        break;

    }
}

void MapWindow::viewHospitals_clicked(){
    hospitalList = MapWinCtrl::getInstance()->getHospitals();
    type = 0;
    //update();
}

void MapWindow::viewNursing_clicked(){
    nursingList = MapWinCtrl::getInstance()->getNursing();
    type = 1;
   // update();
}

void MapWindow::viewAll_clicked(){
    type = 5;
    //update();
}

void MapWindow::acBeds_clicked(){
    availableAC = MapWinCtrl::getInstance()->getACAvailable();
    type = 2;
    //update();
}

void MapWindow::cccBeds_clicked(){
    availableCCC = MapWinCtrl::getInstance()->getCCCAvailable();
    type = 3;
    //update();
}

void MapWindow::ltcBeds_clicked(){
    availableLTC = MapWinCtrl::getInstance()->getLTCAvailable();
    type = 4;
    //update();
}

void MapWindow::mousePressEvent(QMouseEvent *event){

    update();
    QPixmap pm = QPixmap::grabWidget(this);
    QImage test;

    test = pm.toImage();

    QColor currentColor = test.pixel(event->x(), event->y());

    int outerSize = 0;

    if(event->button() == Qt::LeftButton){

        for(int i = 0; i < MapWinCtrl::getInstance()->listOfFacility.size(); i++){

            if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() > MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC()){

                if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC() <= 0)
                    outerSize = (MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() * 5);
                else
                    outerSize = ((MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC()/MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC()) * 5);
                if(outerSize > 10)
                    outerSize = 10;
            }
            else if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() < MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC()){

                if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() <= 0)
                    outerSize = (MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC() * 5);
                else
                    outerSize = ((MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC()/MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC()) * 5);
                if(outerSize > 10)
                    outerSize = 10;
            }
            else if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() > 0
                    && MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() <= (MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC())/4)
                outerSize = 4;
            else if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() > (MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC())/4
                    && MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() <= (MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC())/2)
                outerSize = 6;
            else if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() > (MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC())/2
                    && MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() <= ((MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC()) * 3)/4)
                outerSize = 8;
            else if (MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() > ((MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC()) * 3)/4)
                outerSize = 10;

            if(event->pos().x() <= (MapWinCtrl::getInstance()->listOfFacility.at(i)->getX() + outerSize)
               && event->pos().x() >= (MapWinCtrl::getInstance()->listOfFacility.at(i)->getX() - outerSize)
                && event->pos().y() >= (MapWinCtrl::getInstance()->listOfFacility.at(i)->getY() - outerSize)
                && event->pos().y() <= (MapWinCtrl::getInstance()->listOfFacility.at(i)->getY() + outerSize)){

                MapWinCtrl::getInstance()->gotoFacility(i);
            }
        }

    }
    else{

        if(permissions == "admin"){

            for(int i = 0; i < MapWinCtrl::getInstance()->listOfFacility.size(); i++){

                if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() > MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC()){

                    if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC() <= 0)
                        outerSize = (MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() * 5);
                    else
                        outerSize = ((MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC()/MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC()) * 5);

                    if(outerSize > 10)
                        outerSize = 10;
                }
                else if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() < MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC()){

                    if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() <= 0)
                        outerSize = (MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC() * 5);
                    else
                        outerSize = ((MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC()/MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC()) * 5);

                    if(outerSize > 10)
                        outerSize = 10;
                }
                else if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() > 0
                        && MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() <= (MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC())/4)
                    outerSize = 4;
                else if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() > (MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC())/4
                        && MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() <= (MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC())/2)
                    outerSize = 6;
                else if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() > (MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC())/2
                        && MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() <= ((MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC()) * 3)/4)
                    outerSize = 8;
                else
                    outerSize = 10;

                if(event->pos().x() <= (MapWinCtrl::getInstance()->listOfFacility.at(i)->getX() + outerSize)
                   && event->pos().x() >= (MapWinCtrl::getInstance()->listOfFacility.at(i)->getX() - outerSize)
                    && event->pos().y() >= (MapWinCtrl::getInstance()->listOfFacility.at(i)->getY() - outerSize)
                    && event->pos().y() <= (MapWinCtrl::getInstance()->listOfFacility.at(i)->getY() + outerSize)){

                    MapWinCtrl::getInstance()->invalid();

                    return;
                }

                //update();

            }

            update();
            if(currentColor == QColor("#f2f1f0"))
                MapWinCtrl::getInstance()->invalid();
            else{
                MapWinCtrl::getInstance()->goToAddFac(event->pos(), area, currentColor);
                //viewAll_clicked();
                //update();
            }
            //update();
        }
        else{
            MapWinCtrl::getInstance()->invalid();
        }

    }
update();

}

