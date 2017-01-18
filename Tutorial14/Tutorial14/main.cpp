#include <iostream>
using namespace std;
class Point
{
private:	
	int x, y;
public:
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void Print()
	{
		cout << p1.getX() << " " << p1.getY() << endl;
	}
	void set(int a, int b)
	{
		x = a;
		y = b;
	}
};

int main()
{
	Point p1, p2;
	p1.set(5, 1);
	p1.Print();
	p2.set(2, 3);
	p2.Print();
	system("pause");
	return 0;
}

