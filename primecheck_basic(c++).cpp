#include <iostream>
using namespace std;

int main() {
    int n, i, flag = 0;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << "Not a prime number";
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "Prime number";
    else
        cout << "Not a prime number";

    return 0;
}
