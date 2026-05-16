#include <iostream>
using namespace std;

double toFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

int main() {
    double c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    cout << "Temperature in Fahrenheit = " << toFahrenheit(c);
    return 0;
}
