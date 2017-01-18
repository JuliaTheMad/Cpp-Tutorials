#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	int num, numrand;
	char yn;
	string name;
	srand(time(NULL)); // basically randomize timer~
	cout << "Welcome and please enter your name:"; cin >> name;
	while (true)
	{
		cout << "Hello" << name << "Do you want to play a game?(y/n)"; cin >> yn;
		if (yn == 'n' || yn == 'N')
			return 0;
		if (yn == 'y' || yn == 'Y')
			break;
	}
	
	while (true)
	{
		cout << "Computer will imagine one number from 0 to 5 and you should try to guess it ;)" << endl;
		cin >> num;
		numrand = rand() % 6;  // generates random number from 0 to 5
			if (numrand == num)
				cout << "You Win!" << endl;
			else if (num == -1)
				break;
			else 
				cout << "You Lose! The computer imagined the number:" << numrand << endl;


			/*
			see what I did there ;)
			*/

			/*for (int i = 0; i < 10; i++)
				cout << rand() % 10 << endl; // This generates a random number from 0 to 10
			*/
	}
	system("pause");
	return 0; 
}