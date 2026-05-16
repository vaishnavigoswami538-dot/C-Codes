#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];      // user se input lena
        sum = sum + numbers[i]; // har number ko sum me add karna
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
