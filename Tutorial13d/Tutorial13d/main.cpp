#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream reader("file3.txt");
	int a, b;
	if (reader.is_open())
	{
		reader >> a;
		reader >> b;
		cout << "The sum of a + b is:" << a + b << endl;
	}
	else
	{
		cout << "Error reading file." << endl;
		system("pause");
		return 0;
	}
	reader.close();
	system("pause");
	return 0;
}