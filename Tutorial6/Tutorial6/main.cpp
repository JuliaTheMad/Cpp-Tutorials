#include <iostream>
#include <Windows.h>
using namespace std;

int Sum(int a, int b)
{
	int c;
	c = a + b;
	cout << "Sum function initialized " << endl;
	return c;
}

void WelcomeMessage()
{
	cout << "Welcome to the program." << endl;
}

void StartProgram(string filename) 
{
	ShellExecute(NULL, "open", filename.c_str(), NULL, NULL, SW_SHOWNORMAL);
}
int main()
{
	WelcomeMessage();
	int x, y;
	cin >> x;
	cin >> y;
	cout << Sum(x,y) << endl;
	StartProgram("mspaint");
	system("pause");
	return 0;
}
