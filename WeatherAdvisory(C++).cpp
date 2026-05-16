#include <iostream>
using namespace std;

int main() {
    int temp, aqi, days = 0;

    while (days < 7) {
        cout << "Enter temperature: ";
        cin >> temp;

        cout << "Enter AQI: ";
        cin >> aqi;

        if (temp > 40) cout << "Heatwave alert\n";
        else if (temp < 5) cout << "Cold wave alert\n";

        if (aqi <= 50) cout << "Good\n";
        else if (aqi <= 100) cout << "Moderate\n";
        else if (aqi <= 200) cout << "Unhealthy\n";
        else cout << "Very unhealthy\n";

        cout << "Enter -1 to stop: ";
        int stop;
        cin >> stop;
        if (stop == -1) break;

        days++;
    }
}

