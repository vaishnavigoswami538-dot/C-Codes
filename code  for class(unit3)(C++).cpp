#include <iostream>
using namespace std;

// Class (blueprint)
class Car {
public:
    string brand;
    int speed;

    void drive() {
        cout << brand << " is driving at " << speed << " km/h" << endl;
    }
};

int main() {
    // Objects (real things made from class)
    Car car1;
    car1.brand = "Tesla";
    car1.speed = 120;
    car1.drive();

    Car car2;
    car2.brand = "BMW";
    car2.speed = 150;
    car2.drive();

    return 0;
}
