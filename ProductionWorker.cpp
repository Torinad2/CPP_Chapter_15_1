#include "ProductionWorker.h"

/********************************************
* Default constructor                       *
* Calls base class default constructor      *
*********************************************/
ProductionWorker::ProductionWorker() : Employee() {
    shift = DAY;
    hourlyPayRate = 0.0;
}

/********************************************
* Overloaded constructor                    *
* Initializes inherited and local members   *
*********************************************/
ProductionWorker::ProductionWorker(string name, int number, string date, ShiftType sh, double rate)
    : Employee(name, number, date) {
    shift = sh;
    hourlyPayRate = rate;
}

/********************************************
* Set shift number                          *
*********************************************/
void ProductionWorker::setShift(ShiftType sh) {
    shift = sh;
}

/********************************************
* Set hourly pay rate                       *
*********************************************/
void ProductionWorker::setHourlyPayRate(double rate) {
    hourlyPayRate = rate;
}

/********************************************
* Get shift number                          *
*********************************************/
int ProductionWorker::getShift() const {
    return shift;
}

/********************************************
* Get hourly pay rate                       *
*********************************************/
double ProductionWorker::getHourlyPayRate() const {
    return hourlyPayRate;
}


