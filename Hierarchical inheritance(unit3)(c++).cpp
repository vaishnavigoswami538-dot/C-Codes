// Vehicle Inheritance Example
#include <iostream>
using namespace std;

class Vehicle {
public:
    void move() {
        cout << "Vehicle is moving" << endl;
    }
};

class Car : public Vehicle {};
class Bike : public Vehicle {};

int main() {
    Car c;
    Bike b;

    c.move();
    b.move();

    return 0;
}
