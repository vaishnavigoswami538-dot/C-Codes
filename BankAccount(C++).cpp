#include <iostream>
using namespace std;

class BankAccount {
public:
    string name;
    int balance;

    BankAccount(string n, int b) {   // normal constructor
        name = n;
        balance = b;
    }

    BankAccount(const BankAccount &x) {  // copy constructor
        name = x.name;
        balance = x.balance;
    }

    void show() {
        cout << "Name: " << name << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1("Vaishnavi", 1200);  // original account
    BankAccount acc2 = acc1;              // copied account

    if (acc1.balance >= 1000)
        cout << "Transaction Approved\n";
    else
        cout << "Insufficient Balance\n";

    cout << "\nOriginal Account:\n";
    acc1.show();

    cout << "\nCopied Account:\n";
    acc2.show();
}

