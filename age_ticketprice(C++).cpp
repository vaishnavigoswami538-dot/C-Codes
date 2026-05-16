#include <iostream>
using namespace std;

int main() {
    int age, price;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 12)
        price = 50;           // Child Ticket
    else if (age <= 18)
        price = 100;          // Teen Ticket
    else if (age <= 60)
        price = 200;          // Adult Ticket
    else
        price = 150;          // Senior Ticket

    cout << "Ticket Price = " << price << endl;
    return 0;
}
