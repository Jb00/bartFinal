#include "genreportctrl.h"
#include "mapwinctrl.h"

GenReportCtrl* GenReportCtrl::anInstance = NULL;

GenReportCtrl::GenReportCtrl(){}

GenReportCtrl* GenReportCtrl::getInstance()
{
    if(!anInstance) //If it is doesn't already exist
        anInstance = new GenReportCtrl; //Create a new instance, new for the heap.

    return anInstance;//Return the instance.
}

void GenReportCtrl::invalid(){

    invalidWin = new InvalidWindow();

    invalidWin->setLabelText("You must select a facility.");
    invalidWin->show();

    genCTRL::center(*invalidWin);
}

QList<Facility*> GenReportCtrl::getFacilities(){

    facilitiesList = MapWinCtrl::getInstance()->listOfFacility;

return facilitiesList;
}
