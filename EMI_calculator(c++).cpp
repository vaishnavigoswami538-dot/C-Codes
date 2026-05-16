#include <iostream>
#include <cmath>
using namespace std;

double calculateEMI(double P, double annualRate, int N) {
    double R = annualRate / (12 * 100); // monthly interest rate
    double emi = (P * R * pow(1 + R, N)) / (pow(1 + R, N) - 1);
    return emi;
}

int main() {
    double P, rate;
    int N;

    cout << "Enter Loan Amount: ";
    cin >> P;
    cout << "Enter Annual Interest Rate: ";
    cin >> rate;
    cout << "Enter Loan Duration (in months): ";
    cin >> N;

    cout << "Monthly EMI = " << calculateEMI(P, rate, N) << endl;
    return 0;
}
