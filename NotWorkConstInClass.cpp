#include <iostream>
#include <math.h>
using namespace std;

class Physics
{
public:
	Physics(void);
	~Physics(void);

	float GetF(){return F;}
	void SetF(float R)
	{
		R = this->R;
		std::cout << R;
		SetV();
		F = (p-pn)*g*V;
	}
	float GetV(){return V;}
	void SetV()
	{
		if (V >= 0 || V <=0 )
		{
		R = pow(R,3);
		V = (4*pi/3)*R;
		}
		else
			std::cout << "\nU not input radius ball.\n";
	}
private:
	const float K = 9.8;
	const float p = 1;
	const float pn = 0.1428;
	const float g = 9.8;
	const float pi = 3.14;
	float R, V, F;
};

int main()
{/*
	int ok = 1;
	float R;
	do
	{
	cout << "Input radius ball: ";
	cin >> R;
	if (R > 0)
		ok = 0;
	else
		cout << "\nError. R < 0.\n";
	} while(ok);
	*/

system ("pause");
return 0;
}