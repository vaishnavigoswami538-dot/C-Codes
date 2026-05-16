#include <iostream>
using namespace std;

class Account {
private:
    // Data is hidden
    double balance;

public:
    // Constructor
    Account(double b) {
        balance = b;
    }

    // Function to deposit
    void deposit(double amount) {
        balance += amount;
    }

    // Function to withdraw
    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance!" << endl;
    }

    // Function to show balance
    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    Account acc(1000);       // Object created with initial balance 1000
    acc.deposit(500);        // Deposit
    acc.withdraw(200);       // Withdraw
    acc.showBalance();       // Show balance

    return 0;
}
