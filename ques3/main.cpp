#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    Employee emp1("Usman", 314, 45000, 45);
    Employee emp2("Sara", 102, 45000, 38);

    emp1.displayInfo();
    emp2.displayInfo();

    cout << "\nSalary Comparison:\n";
    if (emp1.getTotalSalary() > emp2.getTotalSalary()) {
        cout << "Usman has higher salary\n";
    } else if (emp1.getTotalSalary() < emp2.getTotalSalary()) {
        cout << "Sara has higher salary\n";
    } else {
        cout << "Both have equal salaries\n";
    }

    return 0;
}
