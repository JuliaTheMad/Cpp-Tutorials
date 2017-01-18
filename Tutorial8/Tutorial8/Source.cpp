#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int b[5] = { 99,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Number " << i << ":";
		cin >> b[i];
	}
	b[0] - 1000;
	int c = b[4];
	for (int i = 0; i < 5; i++)
		cout << b[i] << endl;

	cout << "C turned out to be:" << c << endl;
	cout << b[99] << endl; //Let's add a bug (:P)F {will either result in 0 or 'undefined' but usually 0}
	system("pause");
	return 0;
}