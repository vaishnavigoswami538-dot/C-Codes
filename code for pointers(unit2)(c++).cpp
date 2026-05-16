#include <iostream>
using namespace std;

int main() {
    int x = 42;       // Normal variable
    int* ptr = &x;    // Pointer variable storing address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer ptr stores address: " << ptr << endl;
    cout << "Value at the address stored in ptr: " << *ptr << endl;

    return 0;
}

