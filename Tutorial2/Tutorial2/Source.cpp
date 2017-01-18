#include <iostream>
using namespace std;

int main()
{
	int a;
	double b, c;
	
	a = 10;
	b = 12.35;
	c = a + b;

	cout << "The value of b is:" << b << endl;
	cout << "a =:" << a << endl;
	cout << "Their sum is:" << c << endl;
	cout << "Enter A:" << endl;
	cin >> a;
	c = a + b;
	cout << "The sum of a + b =:" << c << endl;
	 
	system("pause");
	
	return 0;
}