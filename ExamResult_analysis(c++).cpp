#include <iostream>
using namespace std;

int main() {
    int marks[10];
    cout << "Enter marks of 10 students:\n";

    for(int i = 0; i < 10; i++) {
        cout << "Student " << i+1 << ": ";
        cin >> marks[i];

        if (marks[i] >= 90)
            cout << "Excellent\n";
        else if (marks[i] >= 60)
            cout << "Good\n";
        else
            cout << "Needs Improvement\n";
    }

    return 0;
}
