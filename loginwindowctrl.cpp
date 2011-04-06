#include <QApplication>

#include "loginwindowctrl.h"

LoginWindowCtrl* LoginWindowCtrl::anInstance = NULL;

LoginWindowCtrl::LoginWindowCtrl(QWidget *parent) :
        QWidget(parent){

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName ("/home/4user3/bwernik/Desktop/Current_build/Stoic-Bart_Rules-aa466ed/EOBCSTORAGE_2");
    //db.setDatabaseName ("/home/bob/repo/jb2/EOBCSTORAGE");
    if (!db.open()) {
        QMessageBox::warning(this, QObject::tr("Unable to open database"), QObject::tr("An error occured while "
                                                                     "opening the connection: ") + db.lastError().text());}
}

LoginWindowCtrl* LoginWindowCtrl::getInstance()
{
    if(!anInstance) //If it is doesn't already exist
        anInstance = new LoginWindowCtrl; //Create a new instance, new for the heap.

    return anInstance;//Return the instance.
}

bool LoginWindowCtrl::authenticate(QString n, QString p){

    QSqlQuery query("SELECT * FROM user");

    int pwordNum = query.record().indexOf("password");
    int nameNum = query.record().indexOf("username");
    int permissionsNum = query.record().indexOf("permissionLvl");

    while(query.next()){

        queryName = query.value(nameNum).toString();
        queryPword = query.value(pwordNum).toString();


        if(queryName.toStdString() == n.toStdString() && queryPword.toStdString() == p.toStdString()){

            permissions = query.value(permissionsNum).toString();
            //qDebug() << "Permissions: " << permissions;
            return true;
        }
    }

return false;
}

void LoginWindowCtrl::invalid(){

    invalidEntry = new InvalidWindow();
    invalidEntry->show();
    genCTRL::center(*invalidEntry);
}

void LoginWindowCtrl::goToMap(){

    fileName = QLatin1String("/home/4user3/bwernik/Desktop/Current_build/Stoic-Bart_Rules-aa466ed/map.svg");

    mapWin = new MapWindow(fileName, permissions);
    mapWin->setFixedHeight(1000);
    mapWin->setFixedWidth(1000);
    mapWin->show();
    genCTRL::center(*mapWin);
}

