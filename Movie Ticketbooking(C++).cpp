#include <iostream>
using namespace std;

int main() {
    int time, age; 
    string seat, code;
    char again = 'y';

    while (again == 'y') {
        int price = 0;

        cout << "Show time (1-Morning, 2-Matinee, 3-Evening, 4-Night): ";
        cin >> time;

        if (time == 1) price = 150;
        else if (time == 2) price = 200;
        else if (time == 3) price = 250;
        else price = 220;

        cout << "Seat type (regular/premium/vip): ";
        cin >> seat;

        if (seat == "premium") price += 100;
        else if (seat == "vip") price += 200;

        cout << "Enter age: ";
        cin >> age;

        if (age < 12) price -= price * 0.50;
        else if (age >= 60) price -= price * 0.30;

        cout << "Promo code: ";
        cin >> code;

        if (code == "MOVIE10") price -= price * 0.10;

        cout << "Final Price = " << price << endl;

        cout << "Book another? (y/n): ";
        cin >> again;
    }
}

