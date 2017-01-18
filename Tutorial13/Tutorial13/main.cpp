#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream writer("C:\\cowsay.txt");
	if (writer.is_open)
	{
		writer << "Something to say..." << endl;
		writer << "What the FUCK" << endl;
		writer << "Did the FUCKING" << endl;
		writer << "Cow say?" << endl;
		writer << "Fuck?" << endl;
		writer << "Did it fucking QUACK ? or ... ? ? ?" << endl;
		writer << endl;
		writer << "A Cow can ONLY say MMMMOOOOooooooooooooooooooooooooooooooo!" << endl;
		writer << "because it's a" << endl;
		writer << "FUCKING COW !!" << endl;
		writer << "Moo!" << endl;
		writer << "CowSay!" << endl;
		cout << "writing successful!" << endl;
	}
	else 
	{
		cout << "error" << endl;
	}
	writer.close();
	system("pause");
	return 0;
}

