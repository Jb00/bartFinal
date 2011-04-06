#ifndef ADDUSERCTRL_H
#define ADDUSERCTRL_H

#include <QDialog>
#include "genctrl.h"

#include <QList>
#include <QString>
#include <QtSql>
#include <QMessageBox>
#include <QSqlTableModel>

#include "User.h"
#include "invalidwindow.h"

class AddUserCtrl: public genCTRL
{

private :
        static AddUserCtrl* anInstance;
        AddUserCtrl();
        QString userName;
        QString password;
        QString type;
        QList<User *> *userList;
        InvalidWindow* invalidEntry;

public:
    ~AddUserCtrl();

    bool checkExisiting(QString);
//    void addNewUser(QString, QString, QString, QString);

    static AddUserCtrl* getInstance();
    void addToDb();
    void setName(QString);
    void setPassword(QString);
    void setType(QString);
    void setId(int);
    void setList(QList<User *>*);

    void invalid();

};

#endif // ADDUSERCTRL_H

