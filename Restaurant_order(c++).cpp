#include <iostream>
using namespace std;

int main() {
    int choice;
    double total = 0;
    bool ordering = true;

    while (ordering) {
        cout << "\n--- Restaurant Menu ---\n";
        cout << "1. Pizza (?200)\n2. Burger (?100)\n3. Pasta (?150)\n4. Exit & Bill\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: total += 200; cout << "Pizza added!\n"; break;
            case 2: total += 100; cout << "Burger added!\n"; break;
            case 3: total += 150; cout << "Pasta added!\n"; break;
            case 4:
                cout << "\nTotal Bill = ?" << total << endl;
                cout << "Thank you! Visit again!\n";
                ordering = false;
                break;
            default:
                cout << "Invalid choice!\n";
        }
    }
    return 0;
}
