#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double baseSalary;
    int hoursWorked;

public:
    Employee();
    Employee(string n, int id, double salary, int hours);

    double calculateRegularPay();
    double calculateOvertimePay();
    double calculateTotalSalary();

    void displayInfo();

    double getTotalSalary();
};

#endif
