#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;

    if (temp < 0)
        cout << "Freezing Weather";
    else if (temp <= 15)
        cout << "Cold Weather";
    else if (temp <= 30)
        cout << "Normal Weather";
    else
        cout << "Hot Weather";

    return 0;
}
