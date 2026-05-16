#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Default constructor
    Student() {
        name = "vaishnavi";
        age = 18;
    }

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s;    // Default constructor called
    s.show();
    return 0;
}
