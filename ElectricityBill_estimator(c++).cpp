#include <iostream>
using namespace std;

int main() {
    int units[6];
    cout << "Enter monthly electricity units for 6 houses:\n";

    for(int i = 0; i < 6; i++) {
        cout << "House " << i+1 << ": ";
        cin >> units[i];

        int bill;
        if (units[i] <= 100)
            bill = units[i] * 5;
        else if (units[i] <= 300)
            bill = units[i] * 7;
        else
            bill = units[i] * 10;

        cout << "Total Bill = " << bill << "\n";
    }

    return 0;
}
