#ifndef USER_H
#define USER_H

#include <QString>
//User.h
//Define a user



class User
{


 protected :
        QString name;
        QString typeUser;
        QString password;
        QString workAtFacility;

public:
        User();
        User(QString, QString, QString);
        ~User();

        QString getPassword();
        QString getName();
        QString getFacility();
        QString getType();

        void setName(QString);
        void setPerm(QString);
        void setPword(QString);

};

#endif // USER_H
