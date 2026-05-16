#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started..." << endl;
    }
};

class Wheels {
public:
    void roll() {
        cout << "Wheels rolling..." << endl;
    }
};

class Car : public Engine, public Wheels {
};

int main() {
    Car c;
    c.start();   // from Engine
    c.roll();    // from Wheels
    return 0;
}
