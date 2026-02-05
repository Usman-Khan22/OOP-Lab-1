#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee() {
    name = "";
    employeeID = 0;
    baseSalary = 0;
    hoursWorked = 0;
}

Employee::Employee(string n, int id, double salary, int hours) {
    name = n;
    employeeID = id;
    baseSalary = salary;
    hoursWorked = hours;
}

double Employee::calculateRegularPay() {
    return baseSalary;
}

double Employee::calculateOvertimePay() {
    if (hoursWorked > 40) {
        int overtimeHours = hoursWorked - 40;
        double hourlyRate = baseSalary / 40;
        return overtimeHours * hourlyRate * 1.5;
    }
    return 0;
}

double Employee::calculateTotalSalary() {
    return calculateRegularPay() + calculateOvertimePay();
}

double Employee::getTotalSalary() {
    return calculateTotalSalary();
}

void Employee::displayInfo() {
    cout << "\nEmployee Name: " << name;
    cout << "\nEmployee ID: " << employeeID;
    cout << "\nBase Salary: " << baseSalary;
    cout << "\nHours Worked: " << hoursWorked;
    cout << "\nOvertime Pay: " << calculateOvertimePay();
    cout << "\nTotal Salary: " << calculateTotalSalary() << endl;
}

