#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

/*********************************
* Employee Class Declaration     *
* Stores name, number, hire date *
**********************************/
class Employee {
private:
    /*****************************
    * Employee name              *             
    ******************************/
    string employeeName;

    /*****************************
    * Employee number            *
    ******************************/
    int employeeNumber;

    /*****************************
    * Hire date (as a string)    *
    ******************************/
    string hireDate;

public:
    /*****************************
    * Default constructor        *
    ******************************/
    Employee();

    /*****************************
    * Overloaded constructor     *
    ******************************/
    Employee(string name, int number, string date);

    /*****************************
    * Set employee name          *
    ******************************/
    void setEmployeeName(string name);

    /*****************************
    * Set employee number        *
	******************************/
    void setEmployeeNumber(int number);

    /*****************************
    * Set hire date              *
    ******************************/
    void setHireDate(string date);

    /*****************************
    * Get employee name          *
    ******************************/
    string getEmployeeName() const;

    /*****************************
    * Get employee number        *
    *****************************/
    int getEmployeeNumber() const;

    /*****************************
    * Get hire date              *
    ******************************/
    string getHireDate() const;
};

#endif

