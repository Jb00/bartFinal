#include "removeuserctrl.h"

RemoveUserCtrl* RemoveUserCtrl::anInstance = NULL;

RemoveUserCtrl::RemoveUserCtrl()
{
    //aUser = new User();
}

RemoveUserCtrl* RemoveUserCtrl::getInstance()
{
    if(!anInstance) //If it is doesn't already exist
        anInstance = new RemoveUserCtrl; //Create a new instance, new for the heap.

    return anInstance;//Return tAddFacCtrlhe instance.
}

void RemoveUserCtrl::invalid(QString message){

    invalidEntry = new InvalidWindow();

    invalidEntry->setLabelText(message);
    invalidEntry->show();

    genCTRL::center(*invalidEntry);
}

void RemoveUserCtrl::removeUser(User *theUser){

    //qDebug() << "thePatient healthCard: " << thePatient->gethealthCard();
    QSqlQuery query("SELECT * FROM user");

    int nameNum = query.record().indexOf("username");
    int permissionsNum = query.record().indexOf("permissionLvl");

    while(query.next()){

        userName = query.value(nameNum).toString();
        perm = query.value(permissionsNum).toString();


        if(userName.toStdString() == theUser->getName().toStdString() && perm.toStdString() == theUser->getType().toStdString()){

            query.exec("DELETE FROM user WHERE username =\"" + userName + "\"");
        }
    }
}

User* RemoveUserCtrl::searchForUser(QString n){

    QSqlQuery query("SELECT * FROM user");

    int nameNum = query.record().indexOf("username");
    int permissionsNum = query.record().indexOf("permissionLvl");
    int password = query.record().indexOf("password");

    while(query.next()){

        userName = query.value(nameNum).toString();
        perm = query.value(permissionsNum).toString();
        pword = query.value(password).toString();


        if(userName.toStdString() == n.toStdString()){

            aUser = new User(pword, userName, perm);
            //aUser->setName(userName);
            //aUser->setPerm(perm);
            //aUser->setPword(pword);

        }

    }

return aUser;
}

