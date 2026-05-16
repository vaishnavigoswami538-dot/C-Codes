#include <iostream>
using namespace std;

int main() {
	char op;
	double num1, num2;
	
	cout<< "Enter an operator( +,-,*,/ ):" ;
	cin >> op;
	
	cout << "Enter two numbers:" ;
	cin >> num1 >> num2;
	
	switch (op) {
		case'+':
			cout << "Result:" << num1+num2 <<endl;
			break;
		case'-':
			cout << "Result:" << num1-num2 <<endl;
			break;
	    case'*':
	    	cout << "Result:" << num1*num2 <<endl;
	    	break;
	    case'/':
	    	if (num2 == 0) {
	    		cout << "Error: Division by zero is not allowed." <<endl;
			} else {
				cout << "Result:" << num1 / num2;
			}
			break;
			default:
				cout << "Error! The operator is not correct." <<endl;
				break;
	}
	
	return 0;
}
