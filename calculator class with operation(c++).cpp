#include <iostream>
using namespace std;

class Calculator {
public:
    // Member functions for arithmetic operations
    double add(double x, double y) {
        return x + y;
    }

    double subtract(double x, double y) {
        return x - y;
    }

    double multiply(double x, double y) {
        return x * y;
    }

    double divide(double x, double y) {
        if (y != 0) {
            return x / y;
        } else {
            cout << "Error: ";
            return 0; // Return 0 or handle error appropriately
        }
    }
};

// Main part of the program
int main() {
    Calculator calc;
    double num1 = 10.0;
    double num2 = 5.0;

    cout << num1 << " + " << num2 << " = " << calc.add(num1, num2) << endl;
    cout << num1 << " - " << num2 << " = " << calc.subtract(num1, num2) << endl;
    cout << num1 << " * " << num2 << " = " << calc.multiply(num1, num2) << endl;
    cout << num1 << " / " << num2 << " = " << calc.divide(num1, num2) << endl;

    return 0;
}
