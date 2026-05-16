#include <iostream>
using namespace std;

int main() {
    // Allocate memory for one integer
    int* p = new int;

    cout << "Enter a number: ";
    cin >> *p;  // input directly into allocated memory

    cout << "You entered: " << *p << endl;

    delete p;  // free the memory

    return 0;
}

