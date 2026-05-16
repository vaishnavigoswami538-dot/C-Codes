#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int numbers[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int largest = numbers[0]; // pehla element ko sabse bada maan lo
    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest)
            largest = numbers[i];
    }

    cout << "Largest element = " << largest << endl;
    return 0;
}
