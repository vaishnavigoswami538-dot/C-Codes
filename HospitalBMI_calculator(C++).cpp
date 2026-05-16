#include <iostream>
using namespace std;

double calculateBMI(double weight, double height) {
    return weight / (height * height);
}

int main() {
    double weight, height, bmi;
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;

    bmi = calculateBMI(weight, height);
    cout << "BMI = " << bmi << endl;

    if (bmi < 18.5)
        cout << "Underweight";
    else if (bmi < 25)
        cout << "Normal";
    else if (bmi < 30)
        cout << "Overweight";
    else
        cout << "Obese";

    cout << endl;
    return 0;
}
