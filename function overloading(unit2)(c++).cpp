#include <iostream>
using namespace std;

// Overloaded functions
int square(int x) {       // 1?? For integer
    return x * x;
}

double square(double x) { // 2?? For decimal (double)
    return x * x;
}

int main() {
    cout << "Square of 5: " << square(5) << endl;
    cout << "Square of 3.5: " << square(3.5) << endl;
    return 0;
}

