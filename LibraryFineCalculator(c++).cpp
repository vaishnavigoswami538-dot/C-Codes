#include <iostream>
using namespace std;

int main() {
    int days[5];
    cout << "Enter late days for 5 members:\n";

    for(int i = 0; i < 5; i++) {
        cout << "Member " << i+1 << ": ";
        cin >> days[i];

        int fine;
        if (days[i] <= 5)
            fine = days[i] * 2;
        else if (days[i] <= 10)
            fine = days[i] * 5;
        else
            fine = days[i] * 10;

        cout << "Total Fine = " << fine << "\n";
    }

    return 0;
}
