#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	s = "something to say...";
	//s = "Some Text!";
	//cout << s.at(9) << endl;
	string word;
	cout << "Enter the Word :"; cin >> word;
	//s = s + word; same as
	//s += word;
	cout << s << endl;
	cout << s.length() << endl; 
	//s = "abc";
	//s.insert(1 , "132");
	//s.replace(1, 3, "X12");
	s.find("say...");
	// s = s + "132";
	//s.append("132");
	cout << s << endl;
	system("pause");
	return 0;
}