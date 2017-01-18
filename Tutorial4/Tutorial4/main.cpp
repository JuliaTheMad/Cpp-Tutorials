#include <iostream>
using namespace std;

int main() 
{

	double a, z;
	a = 0;
	z = 0;
	
	cin >> a;
	while (a != -1) 
	{

		z += a;
		cin >> a;
	}
	cout << "The result is: " << z << endl;
	system("pause"); 
	return 0;
}

