// Inheritance Ambiguity Example
#include <iostream>
using namespace std;

class Person {
public:
    void walk() {
        cout << "Person is walking" << endl;
    }
};

class Student : public Person {};
class Employee : public Person {};

// Intern inherits from both Student and Employee
class Intern : public Student, public Employee {};

int main() {
    Intern i;
    
    i.Student::walk();   // or
    i.Employee::walk();

    return 0;
}
