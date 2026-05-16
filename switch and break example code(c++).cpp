#include <iostream>
using namespace std;

int main() {
	int choice;
	
	cout<< "Enter 1 to say hi!!, 2 to skip:";
	cin >> choice;
	
	switch (choice) {
		case 1:
			cout<< "hi!!!!!!" <<endl;
			
		case 2:
			cout<< "Skip" <<endl;
			break;
}

return 0;

}
