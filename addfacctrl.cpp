#include "addfacctrl.h"
#include "mapwinctrl.h"

AddFacCtrl* AddFacCtrl::anInstance =NULL;


AddFacCtrl::AddFacCtrl()
{
    //Set value to meaningless value
    id = -1;
    facilityName ="";
    x= -1;
    y= -1;
    AC= -1;
    CCC= -1;
    LTC =-1;
    area =-1;
}

AddFacCtrl* AddFacCtrl::getInstance()
{
    if(!anInstance) //If it is doesn't already exist
        anInstance = new AddFacCtrl; //Create a new instance, new for the heap.

    return anInstance;//Return tAddFacCtrlhe instance.
}

void AddFacCtrl::invalid(){

    invalidWin = new InvalidWindow();

    invalidWin->setLabelText("Insufficient data entered!");
    invalidWin->show();

    genCTRL::center(*invalidWin);
}


void AddFacCtrl::addToDb()
{

    QString numBeds;
    if (!(facilityName == ""))
    {

        Facility * aFacility = new Facility(id, facilityName,x,y,AC,CCC,LTC); //Create the facility to add
        facilityList->append(aFacility); //Append it to the list of facility

        numBeds.setNum(AC);
        qDebug() << "Number of beds being added to AC before if: " << numBeds;

        if(AC > 0){
            numBeds.setNum(AC);

            qDebug() << "Number of beds being added to AC: " << numBeds;
            AddBedController::getInstance()->addtoBed(numBeds, "Acute", aFacility);
        }
        if(CCC > 0){
            numBeds.setNum(CCC);
            AddBedController::getInstance()->addtoBed(numBeds, "Complex", aFacility);
        }
        if(LTC > 0){
            numBeds.setNum(LTC);
            AddBedController::getInstance()->addtoBed(numBeds, "LTC", aFacility);
        }

        facilityList=NULL;

    }

    id = -1;
    facilityName ="";
    x= -1;
    y= -1;
    AC= -1;
    CCC= -1;
    LTC =-1;
    area =-1;
}
void AddFacCtrl::setId(int anId){id = anId;}
void AddFacCtrl::setX(int aX){x = aX;}
void AddFacCtrl::setY(int aY){y= aY;}
void AddFacCtrl::setAC(int anAC){AC = anAC;}
void AddFacCtrl::setCCC(int aCCC){CCC =aCCC;}
void AddFacCtrl::setLTC(int aLTC){LTC=  aLTC;}
void AddFacCtrl::setName(QString aName){facilityName = aName;}
void AddFacCtrl::setArea(int anArea){area = anArea;}
void AddFacCtrl::setList(QList<Facility *> *aFacilityList){facilityList = aFacilityList;}

int AddFacCtrl::getArea(){return area;}
int AddFacCtrl::getAC(){return AC;}
int AddFacCtrl::getCCC(){return CCC;}
int AddFacCtrl::getLTC(){return LTC;}
