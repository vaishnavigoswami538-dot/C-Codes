#include <iostream>
using namespace std;

int main() {
	int choice;
	cout << "Enter you choice(1-Pizza,2-Burger,3-Pasta):";
	cin >> choice;
	
	switch(choice) {
		case 1:
			cout << "You ordered Pizza!" <<endl;
			break;
		case 2:
			cout << "You ordered Burger!" <<endl;
			break;
		case 3:
			cout << "You ordered Pasta!" <<endl;
		default:
			cout <<"Sorry,not available." <<endl;
	}
	
	return 0;
}
