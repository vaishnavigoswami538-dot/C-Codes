#include <iostream>
using namespace std;

string name, role;
float basic, hra, da, tax, netSalary;

// Take basic details
void inputDetails() {
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter job role: ";
    cin >> role;
    cout << "Enter basic salary: ";
    cin >> basic;
}

// Calculate net salary
void calculateSalary() {
    hra = basic * 0.10;   // 10% HRA
    da  = basic * 0.05;   // 5% DA
    tax = basic * 0.02;   // 2% tax

    netSalary = basic + hra + da - tax;
}

// Print salary slip
void displaySlip() {
    cout << "\n--- SALARY SLIP ---\n";
    cout << "Name: " << name << endl;
    cout << "Role: " << role << endl;
    cout << "Net Salary: Rs. " << netSalary;
}

int main() {
    inputDetails();
    calculateSalary();
    displaySlip();
    return 0;
}

