#ifndef GENREPORTCTRL_H
#define GENREPORTCTRL_H

#include "genctrl.h"
#include "invalidwindow.h"
#include "Facility.h"

class GenReportCtrl: public genCTRL
{
public:
    static GenReportCtrl* getInstance();
    void invalid();
    QList<Facility*> getFacilities();

private:
    GenReportCtrl();
    static GenReportCtrl* anInstance;
    InvalidWindow * invalidWin;

    QList<Facility*> facilitiesList;

};

#endif // GENREPORTCTRL_H
