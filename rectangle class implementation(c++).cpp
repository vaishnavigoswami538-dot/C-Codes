#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Member function to calculate the area
    double area() {
        return length * width;
    }
};

// Main part of the program
int main() {
    // Create an object of the Rectangle class
    Rectangle rect(5.0, 3.0); 

    // Compute and display the area
    cout << "Area of the rectangle: " << rect.area() << endl;

    return 0;
}
