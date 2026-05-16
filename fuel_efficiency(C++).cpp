#include <iostream>
using namespace std;

float distanceTravelled, fuelUsed, mileage;

// Take distance & fuel details
void inputData() {
    cout << "Enter distance travelled (km): ";
    cin >> distanceTravelled;

    cout << "Enter fuel used (liters): ";
    cin >> fuelUsed;
}

// Calculate mileage
void calculateMileage() {
    mileage = distanceTravelled / fuelUsed;
}

// Display result + feedback
void displayEfficiency() {
    cout << "\nMileage: " << mileage << " km/l\n";

    if (mileage > 20)
        cout << "Efficiency: Excellent";
    else if (mileage >= 15)
        cout << "Efficiency: Average";
    else
        cout << "Efficiency: Poor";
}

int main() {
    inputData();
    calculateMileage();
    displayEfficiency();
    return 0;
}

