#include "Employee.h"

/***********************************************
* Default constructor initializes empty fields *
************************************************/
Employee::Employee() {
    employeeName = "";
    employeeNumber = 0;
    hireDate = "";
}

/***********************************************
* Overloaded constructor sets all fields       *
************************************************/
Employee::Employee(string name, int number, string date) {
    employeeName = name;
    employeeNumber = number;
    hireDate = date;
}

/***********************************************
* Set employee name                            *
************************************************/
void Employee::setEmployeeName(string name) {
    employeeName = name;
}

/***********************************************
* Set employee number                          *
************************************************/
void Employee::setEmployeeNumber(int number) {
    employeeNumber = number;
}

/***********************************************
* Set hire date                                *
************************************************/
void Employee::setHireDate(string date) {
    hireDate = date;
}

/***********************************************
* Get employee name                            *
************************************************/
string Employee::getEmployeeName() const {
    return employeeName;
}

/***********************************************
* Get employee number                          *
************************************************/
int Employee::getEmployeeNumber() const {
    return employeeNumber;
}

/***********************************************
* Get hire date                                *
************************************************/
string Employee::getHireDate() const {
    return hireDate;
}

