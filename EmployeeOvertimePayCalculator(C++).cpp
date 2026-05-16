#include <iostream>
using namespace std;

int main() {
    int hours[7];
    cout << "Enter working hours of 7 employees:\n";

    for(int i = 0; i < 7; i++) {
        cout << "Employee " << i+1 << ": ";
        cin >> hours[i];

        int overtime;
        if (hours[i] > 40)
            overtime = (hours[i] - 40) * 200;
        else
            overtime = 0;

        cout << "Overtime Pay = " << overtime << "\n";
    }

    return 0;
}
