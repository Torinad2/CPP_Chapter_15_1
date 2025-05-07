#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

/**********************************************
* Shift types enumeration                     *
***********************************************/
enum ShiftType {
    DAY = 1,
    NIGHT = 2
};

/**********************************************
* ProductionWorker Class Declaration          *
* Inherits from Employee                      *
***********************************************/
class ProductionWorker : public Employee {
private:
    /******************************************
    * Shift (DAY or NIGHT)                    *
	*******************************************/
    ShiftType shift;

    /******************************************
    * Hourly pay rate                         *
    *******************************************/
    double hourlyPayRate;

public:
    /******************************************
    * Default constructor                     *
    *******************************************/
    ProductionWorker();

    /******************************************
    * Overloaded constructor                  *
    *******************************************/
    ProductionWorker(string name, int number, string date, ShiftType sh, double rate);

    /******************************************
    * Set shift                               *
    *******************************************/
    void setShift(ShiftType sh);

    /******************************************
    * Set hourly pay rate                     *
    *******************************************/
    void setHourlyPayRate(double rate);

    /******************************************
    * Get shift                               *
    *******************************************/
    int getShift() const;

    /******************************************
    * Get hourly pay rate                     *
    *******************************************/
    double getHourlyPayRate() const;
};

#endif


