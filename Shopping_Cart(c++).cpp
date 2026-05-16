#include <iostream>
using namespace std;

int main() {
    int choice;
    double total = 0;
    bool shopping = true;

    while (shopping) {
        cout << "\n--- Online Shopping Cart ---\n";
        cout << "1. Clothes (?500)\n2. Shoes (?800)\n3. Gadgets (?1500)\n4. Checkout\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: total += 500; cout << "Clothes added!\n"; break;
            case 2: total += 800; cout << "Shoes added!\n"; break;
            case 3: total += 1500; cout << "Gadget added!\n"; break;
            case 4:
                cout << "Total bill = ?" << total << endl;
                cout << "Thank you for shopping!\n";
                shopping = false;
                break;
            default:
                cout << "Invalid choice!\n";
        }
    }
    return 0;
}
