#include <iostream>
using namespace std;

void checkEvenOdd(int n) {
    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkEvenOdd(num);
    return 0;
}
