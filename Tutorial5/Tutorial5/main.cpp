#include <iostream>
#include <Windows.h>
// #define FOREGROUND_YELLOW 0x0003 //Teal
#define FOREGROUND_YELLOW 0x0007
using namespace std;

int main()
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << " BlueBlueBlue " << endl;
	SetConsoleTextAttribute(h, FOREGROUND_RED| FOREGROUND_INTENSITY);
	cout << " Red like Roses. " << endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << " I'm a friendly color :) ... but I'm probably lying. " << endl;
	SetConsoleTextAttribute(h, FOREGROUND_YELLOW | FOREGROUND_INTENSITY);
	cout << " I'm a friendly color :)" << endl;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Line Number :" << i << endl;
	}

	system("pause");
	return 0;
}