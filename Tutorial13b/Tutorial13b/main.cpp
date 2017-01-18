#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream reader("C:\\cowsay.txt");
	int a, b;
	if(reader.is_open())
	{
		reader >> a;
		reader >> b;

		cout << "Sum of variables a and b is " << a + b << endl;

	}
	else
	{
		cout << "error" << endl;
	}
	reader.close();
	system("pause");
	return 0;
}

