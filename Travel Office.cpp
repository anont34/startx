#include <iostream>
#include <fstream>
using namespace std;

struct Buro
{
	char *country;
	float value;
	int days;
	char *dayend;
};

int main()
{
	Buro Base;
	Base.country = "Ukraine";
	Base.value = 200;
	Base.days = 31;
	Base.dayend = "14 March";

	Buro Medium;
	Medium.country = "Russia";
	Medium.value = 500;
	Medium.days = 90;
	Medium.dayend = "26 July";

	Buro Hard;
	Hard.country = "Pakistan";
	Hard.value = 1000;
	Hard.days = 365;
	Hard.dayend = "31 December";
	
	char *countryname = new char[20];
	do
	{
	cout << "Country Tour Search\n" << "Enter country: "; // not work
	cin >> countryname; cout << endl;

	if(countryname == Base.country)
	{
		cout << "Value = " << Base.value
		<< "Rest days " << Base.days
		<< "When end = " << Base.dayend << endl;
		break;
	}
	if(countryname == Medium.country)
	{
		cout << "Value = " << Medium.value
		<< "Rest days " << Medium.days
		<< "When end = " << Medium.dayend << endl;
		break;
	}
	if(countryname == Hard.country)
	{
		cout << "Value = " << Hard.value
		<< "Rest days " << Hard.days
		<< "When end = " << Hard.dayend << endl;
		break;
	}
	else
		cout << "Error. Not fornd this country. Try again." << endl;
	}while(true);
system("pause");
return 0;
}