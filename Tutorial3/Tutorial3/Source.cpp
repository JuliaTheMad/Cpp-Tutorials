#include <iostream>
using namespace std;

int main() {


	int a, b;
	
	cout << "Enter first number:" ;
	cin >> a;
	cout << "Enter second Number:" ;
	cin >> b;

	if (a > b) {

		cout << "Variable a is greater than b:" << endl;
		cout << "Value of a is:" << a << " Value of b is:" << b << endl;
	}

	if (a == b) {
		cout << "These numbers are equal:" << endl;
		cout << "Value of a is:" << a << " Value of b is:" << b << endl;
	}

	if (a < b) {

		cout << "Variable b is greater than a:" << endl;
		cout << "Value of a is:" << a << " Value of b is:" << b << endl;
	}
	system("pause");
	return 0;
}