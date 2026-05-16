#include <iostream>
using namespace std;

class LivingThing {
public:
    void grow() {
        cout << "Growing..." << endl;
    }
};

class Animal : public LivingThing {
};

class Dog : public Animal {
};

int main() {
    Dog d;
    d.grow();   // Function inherited from LivingThing
    return 0;
}
