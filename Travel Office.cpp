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
	cout << "Country Tour Search\n" << "Enter country: ";
	cin >> countryname; cout << endl;

	if(strcmp(countryname,Base.country) == 0)
	{
		cout << "Value: " << Base.value
		<< "\nRest days: " << Base.days
		<< "\nWhen end: " << Base.dayend << endl;
		break;
	}
	if(strcmp(countryname,Medium.country) == 0)
	{
		cout << "Value: " << Medium.value
		<< "\nRest days: " << Medium.days
		<< "\nWhen end: " << Medium.dayend << endl;
		break;
	}
	if(strcmp(countryname,Hard.country) == 0)
	{
		cout << "Value: " << Hard.value
		<< "\nRest days: " << Hard.days
		<< "\nWhen end: " << Hard.dayend << endl;
		break;
	}
	else
		cout << "Error. Not fornd this country. Try again." << endl;
	}while(true);

system("pause");
return 0;
}
