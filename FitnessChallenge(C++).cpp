#include <iostream>
using namespace std;

int main() {
    int goal, steps, best = 0;
    string level;

    cout << "Enter goal steps: ";
    cin >> goal;

    for (int day = 1; day <= 7; day++) {
        cout << "Day " << day << " steps: ";
        cin >> steps;

        if (steps >= goal) level = "Excellent";
        else if (steps >= goal * 0.70) level = "Good";
        else if (steps >= goal * 0.50) level = "Average";
        else level = "Poor";

        cout << "Performance: " << level << endl;

        if (steps > best) best = steps;
    }

    cout << "Best day steps = " << best << endl;
}

