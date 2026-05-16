#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Accessing array elements using indexing
    cout << "Array elements with their indexes:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Index " << i << " -> " << numbers[i] << endl;
    }

    return 0;
}
