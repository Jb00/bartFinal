#ifndef MAPWINCTRL_H
#define MAPWINCTRL_H

#include<QList>
#include <QDialog>
#include <QtSql>
#include <QMessageBox>
#include <QSqlTableModel>
#include "Facility.h"
#include "Patient.h"
#include "facilitywindow.h"
#include "adduserctrl.h"
#include "adduserwindow.h"
#include "addfacility.h"
#include "genreportwin.h"
#include "removeuser.h"

/*

#include "genctrl.h"
#include "adduserctrl.h"
#include "MessageController.h"



#include "invalidwindow.h"
*/

#include <QDateTime>
class MapWinCtrl: public genCTRL
{
public:


    ~MapWinCtrl();

    void goToAddUser();
    void goToAddFac(const QPoint &, const int &, const QColor &);
    void setupPatients();
    void setupFacility();
    void gotoFacility(int);
    void goToGenerate();
    void goToRemoveUser();

    void setupUser();
    int getId();
    static MapWinCtrl* getInstance();
    Facility* getFacilityFromid(QString);
    void setWlArray(QString,QString);
    int getWlArray(int);

    QList<Facility*> getHospitals();
    QList<Facility*> getNursing();
    QList<Facility*> getACAvailable();
    QList<Facility*> getCCCAvailable();
    QList<Facility*> getLTCAvailable();


    void invalid();
    QList<Facility*> listOfFacility;
    QList<Patient*> listOfPatient;

    QList<User*> listOfUser;


private:

    static MapWinCtrl* anInstance;
    MapWinCtrl();
    AddUserWindow* addUserWin;
    AddFacility* addFac;
    FacilityWindow* aFacilityView;
    InvalidWindow* invalidWin;
    GenReportWin* reportWin;
    RemoveUser* remUser;
    int wlArray[5];

    QList<Facility*> listOfHospital;
    QList<Facility*> listOfNursing;
    QList<Facility*> availableACBeds;
    QList<Facility*> availableLTCBeds;
    QList<Facility*> availableCCCBeds;

    //FAKE DATA TEST


 //   QList<Patient*> listOfPatient;
 //   QList<Facility*>listOfFacility;
//    QList<User*> listOfUser;


    //Test Patient for Add patient to LTC
    Patient * aPatient11;
    Patient * aPatient12;
    Patient * aPatient13;
    Patient * aPatient14;
    Patient * aPatient15;
    Patient * aPatient16;
    Patient * aPatient17;
    //QList<Patient*> aPatientList;

    Facility * aFacility2;
    Facility * aFacility3;
    Facility * aFacility4;
};

#endif // MAPWINCTRL_H

