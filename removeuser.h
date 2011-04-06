#ifndef REMOVEUSER_H
#define REMOVEUSER_H

#include <QMainWindow>

#include "removeuserctrl.h"
#include "User.h"
#include "genui.h"

namespace Ui {
    class RemoveUser;
}

class RemoveUser : public QMainWindow, public genUI
{
    Q_OBJECT

public:
    explicit RemoveUser(QWidget *parent = 0);
    ~RemoveUser();

    void keyPressEvent(QKeyEvent * event);

    void setScheme();

private:
    Ui::RemoveUser *ui;

    User* aUser;

private slots:

    void searchBtn_clicked();
    void removeBtn_clicked();
    void okBtn_clicked();
};

#endif // REMOVEUSER_H
