#include <iostream>
//#include <>
using namespace std;

int main()
{
	int *p; //this is the name of our pointer
	int n = 0;
	int b = 10;
	p = &n; //// some example pointers are: 0034FBC4 0026F754 0038F78C		
	cout << p << endl;
	p = &b;
	cout << p << endl;
	/* so doing things like */
	// *p = *p + 10;
	// cout of *p will produce 2 numbers, *p and (*p+10)
	//
	// (*p)++;
	///doing this will modify the pointer ADDRESS, not the value of the pointer/// 

	system("pause");
	return 0;
}