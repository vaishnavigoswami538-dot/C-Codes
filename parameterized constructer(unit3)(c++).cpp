#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s("Amit", 20);   // Values passed
    s.show();
    return 0;
}
