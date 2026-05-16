#include <iostream>
using namespace std;

double calculateFinalBill(double amount) {
    double discount;
    if (amount > 5000)
        discount = 0.20;
    else if (amount > 2000)
        discount = 0.10;
    else
        discount = 0.05;

    return amount - (amount * discount);
}

int main() {
    double amount;
    cout << "Enter total amount: ";
    cin >> amount;

    cout << "Payable Amount after discount = " 
         << calculateFinalBill(amount) << endl;

    return 0;
}
