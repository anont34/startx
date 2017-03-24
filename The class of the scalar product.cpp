#include <iostream>
#include <fstream>
using namespace std;

class Skalar
{
public:
	Skalar(int x11, int x22, int y11, int y22)
	{
		void SetX1(int x11);{x1=x11;}
		void SetX2(int x22);{x2=x22;}
		void SetY1(int y11);{y1=y11;}
		void SetY2(int y22);{y2=y22;}
		void SetAB(int x1, int x2, int y1, int y2);{ab = x1*x2+y1*y2;}
	}

	int GetX1(){return x1;}
	int GetX2(){return x2;}
	int GetY1(){return y1;}
	int GetY2(){return y2;}
	float GetAB(){return ab;}


private:
	int x1, x2, y1, y2;
	float ab;

};

int main()
{
	int x11, x22, y11, y22;
	cout << "ab = x1 * x2 + y1 * y2" << endl;
	cout << "Input x1: "; cin >> x11;
	cout << "Input x2: "; cin >> x22;
	cout << "Input y1: "; cin >> y11;
	cout << "Input y2: "; cin >> y22;
	
	Skalar proizved (x11, x22, y11, y22);

	cout << proizved.GetX1() << " * " << proizved.GetX2() << " + "
		<< proizved.GetY1() << " * " << proizved.GetY2() << " =  "
		<< proizved.GetAB() << endl;

system("pause");
return 0;
}