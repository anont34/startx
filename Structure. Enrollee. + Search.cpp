#include <iostream>
using namespace std;

struct Abitur
{
	int index;
	char lastName[20];
	char firstName[20];
	char address[20];
	char school[20];
	char sex[20];
};

int main()
{
Abitur *base = new Abitur[50];
int choice, indexadd = 0;
/*
//1
base[0].index = 1;
base[0].lastName = "Klinton";
base[0].firstName = "Ann";
base[0].address = "N.Y.";
base[0].school = "St.Maria";
base[0].sex = "women";
//2

base[1].index = 1;
base[1].lastName = "Xoxol";
base[1].firstName = "Serega";
base[1].address = "Nikolaev";
base[1].school = "Varvarovka";
base[1].sex = "man";
//3
base[2].index = 1;
base[2].lastName = "Tokar";
base[2].firstName = "Dimas";
base[2].address = "Xerson";
base[2].school = "4 class St.Patrik";
base[2].sex = "man";
*/
while(true)
{
cout << "\tMENU \n3 - search \n2 - base \n1 - add \n0 - exit \nU choice: ";
cin >> choice;	cout << endl;

switch (choice)
{
case 1:
	{
		// add human
			cout << "\nInput data new abitur:\n";
			cout << "Index: ";
			cin >> base[indexadd].index;
			cout << "First name: ";
			cin >> base[indexadd].firstName;
			cout << "Last name: ";
			cin >> base[indexadd].lastName;
			cout << "Address: ";
			cin >> base[indexadd].address;
			cout << "School: ";
			cin >> base[indexadd].school;
			cout << "Sex: " << indexadd;
			cin >> base[indexadd].sex;
			indexadd++;
			break;
	}
case 2:
	{
		cout << "\tBASE: \n";
		for (int i = 0; i<indexadd; i++)
		{
			cout << "\nAbitur: "
			<< "\nIndex: " << base[i].index
			<< "\nFirst name: " << base[i].firstName
			<< "\nLast name: " << base[i].lastName
			<< "\nAddress: " << base[i].address
			<< "\nSchool: " << base[i].school
			<< "\nSex: " << base[i].sex << endl;
		}
		cout << "\tBASE END: \n";
		break;
	}

default:
	cout << "Error # choice.";
	break;
}
}
system ("pause");
return 0;
}