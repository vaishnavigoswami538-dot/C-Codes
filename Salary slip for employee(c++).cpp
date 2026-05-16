#include <iostream>
using namespace std;

float salary(float basic, float allow) {        // Regular
    if (allow > 0.5 * basic) allow += 0.1 * basic;
    return basic + allow;
}

float salary(float rate, int hours) {           // Contract
    if (hours > 160) return rate * 160 + (hours - 160) * rate * 1.5;
    return rate * hours;
}

float salary(float stipend, bool more6) {       // Intern
    if (more6) stipend += stipend * 0.20;
    return stipend;
}

int main() {
    cout << salary(20000, 12000) << endl;
    cout << salary(200, 170) << endl;
    cout << salary(8000, true) << endl;
}

