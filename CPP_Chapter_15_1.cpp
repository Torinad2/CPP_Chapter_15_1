/****************************************************************
*                                                               *
* Employee and ProductionWorker Classes                         *
*                                                               *
* Developed by: Nikita Baiborodov                               *
*                                                               *
* Design a class named Employee. The class should keep the      *
* following information:                                        *
* � Employee name                                               *
* � Employee number                                             *
* � Hire date                                                   *
*                                                               *
* Write one or more constructors, and the appropriate accessor  *
* and mutator functions, for the class.                         *
*                                                               *
* Next, write a class named ProductionWorker that is derived    *
* from the Employee class.                                      *
* The ProductionWorker class should have member variables to    *
* hold the following information:                               *
*  Shift (an integer)                                          *
*  Hourly pay rate (a double)                                  *
*                                                               *
* The workday is divided into two shifts: day and night.        *
* The shift variable will hold an integer value representing    *
* the shift that the employee works. The day shift is shift 1,  *
* and the night shift is shift 2.                               *
* Write one or more constructors, and the appropriate accessor  *
* and mutator functions, for the class.                         *
* Demonstrate the classes by writing a program                  *
* that uses a ProductionWorker object.                          *
*                                                               *
*****************************************************************/


#include <iostream>
#include <string>
#include "ProductionWorker.h"

using namespace std;

int main() {
    /*********************************************************
     * Declare variables for user input                      *
     *********************************************************/
    string name, hireDate;
    int number;
    double rate;
    int shiftInput;
    ShiftType shift;

    /*********************************************************
     * Get employee name                                     *
     *********************************************************/
    cout << "Enter employee name: ";
    getline(cin, name);

    /*********************************************************
     * Get and validate employee number                      *
     *********************************************************/
    cout << "Enter employee number: ";
    cin >> number;
    while (cin.fail() || number <= 0) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Error: Please enter a positive integer: ";
        cin >> number;
    }

    /**********************************************************
     * Get hire date                                          *
     **********************************************************/
    cout << "Enter hire date: ";
    cin >> hireDate;

    /*********************************************************
     * Get and validate hourly pay rate                      *
     *********************************************************/
    cout << "Enter hourly pay rate: $";
    cin >> rate;
    while (cin.fail() || rate <= 0) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Error: Please enter a positive number: $";
        cin >> rate;
    }

    /*********************************************************
     * Prompt for shift input with validation                *
     *********************************************************/
    cout << "Enter shift (1 = Day, 2 = Night): ";
    cin >> shiftInput;
    while (shiftInput != 1 && shiftInput != 2) {
        cout << "Error: Please enter 1 for Day or 2 for Night: ";
        cin >> shiftInput;
    }

    /**********************************************************
     * Convert input to enum ShiftType                        *
     **********************************************************/
    shift = static_cast<ShiftType>(shiftInput);

    /**********************************************************
     * Create ProductionWorker object                         *
     **********************************************************/
    ProductionWorker worker(name, number, hireDate, shift, rate);

    /**********************************************************
     * Display employee info                                  *
     **********************************************************/
    cout << endl;
    cout << "*********************************************" << endl;
    cout << "* Employee Information:                     *" << endl;
    cout << "*********************************************" << endl;

    /**********************************************************
     * Display the employee's name                            *
     **********************************************************/
    cout << endl;
    cout << "Employee Name: " << worker.getEmployeeName() << endl;

    /**********************************************************
    * Display the employee's number                           *
    ***********************************************************/
    cout << "Employee Number: " << worker.getEmployeeNumber() << endl;

    /**********************************************************
    * Display the employee's hire date                        *
    ***********************************************************/
    cout << "Hire Date: " << worker.getHireDate() << endl;

    /**********************************************************
    * Display the shift with text label                       *
    ***********************************************************/
    cout << "Shift: " << (worker.getShift() == DAY ? "Day" : "Night") << endl;

    /**********************************************************
    * Display the hourly pay rate                             *
    ***********************************************************/
    cout << "Hourly Pay Rate: $" << worker.getHourlyPayRate() << endl;

    /**********************************************************
    * Developer credit                                        *
    ***********************************************************/
    cout << endl;
    cout << "*********************************************" << endl;
    cout << "* Developed by: Nikita Baiborodov           *" << endl;
    cout << "*********************************************" << endl;

    return 0;
}
