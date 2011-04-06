#ifndef REMOVEUSERCTRL_H
#define REMOVEUSERCTRL_H

#include <QtSql>
#include <QSqlTableModel>

#include "invalidwindow.h"
#include "User.h"
#include "genctrl.h"

class RemoveUserCtrl: public genCTRL
{
public:
    static RemoveUserCtrl* getInstance();

    void invalid(QString);

    User* searchForUser(QString);
    void removeUser(User*);


private:
    RemoveUserCtrl();
    static RemoveUserCtrl* anInstance;
    InvalidWindow* invalidEntry;

    QString perm;
    QString userName;
    QString pword;
    User* aUser;
};

#endif // REMOVEUSERCTRL_H
