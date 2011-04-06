#ifndef LOGINWINDOWCTRL_H
#define LOGINWINDOWCTRL_H

#include <QDialog>
#include <QtSql>
#include <QSqlTableModel>
#include <QMessageBox>
#include <string.h>
#include <QWidget>

#include "User.h"
#include "invalidwindow.h"
#include "mapwindow.h"
#include "genctrl.h"

class LoginWindowCtrl:public QWidget, public genCTRL
{

public:
    //LoginWindowCtrl();
    //~LoginWindowCtrl();

    static LoginWindowCtrl* getInstance();

    bool authenticate(QString, QString);
    void invalid();
    void goToMap();

    QString getPermissions();

private:

    LoginWindowCtrl(QWidget *parent = 0);
    static LoginWindowCtrl* anInstance;

    User* aUser;
    InvalidWindow* invalidEntry;
    MapWindow* mapWin;

    QString queryName;
    QString queryPword;
    QString fileName;
    QString permissions;
};

#endif // LOGINWINDOWCTRL_H
