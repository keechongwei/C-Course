#include <iostream>
using namespace std;

int main() {
    cout << "This is a program for calculating net salary (provided Basic Salary, percentage allowances and percentage deductions)" << endl;
    double basicSalary, allowancesPercentage, deductionsPercentage;
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
    cout << "Enter Allowances Percentage: ";
    cin >> allowancesPercentage;
    cout << "Enter Deductions Percentage: ";
    cin >> deductionsPercentage;
    double allowances = (allowancesPercentage / 100) * basicSalary;
    double deductions = (deductionsPercentage / 100) * basicSalary;
    double netSalary = basicSalary + allowances - deductions;
    cout << "Net Salary: " << netSalary << endl;
    return 0;
}