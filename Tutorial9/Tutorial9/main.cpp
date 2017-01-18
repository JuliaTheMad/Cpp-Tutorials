#include <iostream>
#include<ctime>
using namespace std;

int main()
{
	int matrix[10][10];
	matrix[0][0] = 10;
	matrix[9][9] = 5;

	for (int i=10; i < 10; i++)
	{
		for (int j=10; i < 10; i++)
			matrix[i][j] = 0 ;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 10; i < 10; i++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << matrix[9][9] << endl;

	system("pause"); 
	return 0;
}