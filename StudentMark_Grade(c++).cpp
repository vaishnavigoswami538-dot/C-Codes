#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade A - Excellent performance";
    else if (marks >= 75)
        cout << "Grade B - Good performance";
    else if (marks >= 50)
        cout << "Grade C - Satisfactory performance";
    else
        cout << "Fail - Unsatisfactory performance";

    return 0;
}
