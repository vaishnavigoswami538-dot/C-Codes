#include <iostream>
using namespace std;

int main() {
    int balance = 1000, choice, amt;

    while (true) {
        cout << "\n1 Balance\n2 Deposit\n3 Withdraw\n4 Mini-Statement\n5 Exit\n";
        cin >> choice;

        if (choice == 1)
            cout << "Balance = " << balance << endl;

        else if (choice == 2) {
            cout << "Enter amount: ";
            cin >> amt;
            balance += amt;
        }

        else if (choice == 3) {
            cout << "Enter amount: ";
            cin >> amt;
            if (balance < amt + 500)
                cout << "Withdrawal not allowed\n";
            else
                balance -= amt;
        }

        else if (choice == 4)
            cout << "Mini-statement: Balance = " << balance << endl;

        else
            break;
    }
}

