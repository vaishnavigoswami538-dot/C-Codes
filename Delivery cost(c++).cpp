#include <iostream>
using namespace std;

float cost(float w, float d) {                   // Local
    float c = w*10 + d*5;
    if (d < 10) c -= c*0.10;
    return c;
}

float cost(float w, float d, float fee) {        // International
    float c = w*20 + d*10 + fee;
    if (w > 20) c += c*0.15;
    return c;
}

float cost(float w, float d, int pri) {          // Express
    float c = w*15 + d*8 + pri;
    if (d > 1000) c += pri;
    return c;
}

int main() {
    cout << cost(5, 8) << endl;
    cout << cost(25, 1000, 500) << endl;
    cout << cost(10, 1500, 300) << endl;
}

