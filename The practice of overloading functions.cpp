#include <iostream>
#include <math.h>
using namespace std;

class Rectangle
{
public:
	Rectangle(int width, int height);
	~Rectangle(){}

	void DrawShape() const;
	void DrawShape(int aWidth, int aHeight) const;

private:
	int itsWidth;
	int itsHeight;
};

Rectangle::Rectangle(int width, int height)
{
	itsWidth = width;
	itsHeight = height;
}
void Rectangle::DrawShape() const
{
	DrawShape (itsWidth, itsHeight);
}

void Rectangle::DrawShape(int width, int height) const
{
	for (int i = 0; i<height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << "*";
		}
	cout << "\n";
	}
}


int main()
{
	Rectangle theRect(30, 5);
	cout << "DrawShape(): \n";
	theRect.DrawShape();
	cout << "\nDrawShape(40,2): \n";
	theRect.DrawShape(40, 2);

system ("pause");
return 0;
}