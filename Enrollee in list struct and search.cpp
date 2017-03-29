#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct Enrollee // abiturient
{
	int index;
	char firstName[15];
	char lastName[15];
	char address[20];
	char school[20];
	char sex[15];
};

int main()
{
	Enrollee *p = new Enrollee[1];

	int choice = 1;
	int size = 1;

	cout << "Input first enrollee:" << endl;

	while (choice)
	{
		if(size == 1)
		{
			cout << "Index: ";
			cin >> p[size-1].index;
			cout << "First name: ";
			cin >> p[size-1].firstName;
			cout << "Last name: ";
			cin >> p[size-1].lastName;
			cout << "Address: ";
			cin >> p[size-1].address;
			cout << "School: ";
			cin >> p[size-1].school;
			cout << "Sex: ";
			cin >> p[size-1].sex;
		}
		else //size > 1
		{
			Enrollee *copy = new Enrollee [size-1]; // from p to copy
			
			for(int i=0; i < size-1; i++)
			{
				copy[i].index = p[i].index;
				strcpy(copy[i].firstName, p[i].firstName);
				strcpy(copy[i].lastName, p[i].lastName);
				strcpy(copy[i].address, p[i].address);
				strcpy(copy[i].school, p[i].school);
				strcpy(copy[i].sex, p[i].sex);
			}

			delete [] p; // jailbreak memory

			p = new Enrollee[size]; // new mem

			for (int i = 0; i < size-1; i++)
			{
				p[i].index = copy[i].index;
				strcpy(p[i].firstName, copy[i].firstName);
				strcpy(p[i].lastName, copy[i].lastName);
				strcpy(p[i].address, copy[i].address);
				strcpy(p[i].school, copy[i].school);
				strcpy(p[i].sex, copy[i].sex);
			}

			delete [] copy; // jailbreak mem

			cout << "Index: ";
			cin >> p[size-1].index;
			cout << "First name: ";
			cin >> p[size-1].firstName;
			cout << "Last name: ";
			cin >> p[size-1].lastName;
			cout << "Address: ";
			cin >> p[size-1].address;
			cout << "School: ";
			cin >> p[size-1].school;
			cout << "Sex: ";
			cin >> p[size-1].sex;

		}
		size++; // stchetchik+1

		cout << "\nList of enrollee - 3, search by name - 2, add new data - 1, exit - 0: ";
        cin >> choice;

		if (choice == 2) // func of search
		{
			char name[20];
			cout << "Enter name: ";
			cin >> name;
			for (int i = 0; i < (size-1); i++)
			{
				if (strcmp (name, p[i].firstName) == 0)
				{cout << endl << "\Result find enrollee: " << "\nIndex: " << p[i].index << "\nFirst name: " << p[i].firstName
				<< "\nLast name: " << p[i].lastName << "\nAddress: " << p[i].address
				<< "\nSchool: " << p[i].school << "\nSex: " << p[i].sex << endl;}
			}
		cout << "\nList of enrollee - 3, search by name - 2, add new data - 1, exit - 0: ";
		cin >> choice;
		}

		if (choice == 3) // list of student
		{
			for (int i = 0; i < (size-1); i++)
			{cout << endl << ">>>>> BASE <<<<<" << "\nEnrollee: " << "\nIndex: " << p[i].index << "\nFirst name: " << p[i].firstName
			<< "\nLast name: " << p[i].lastName << "\nAddress: " << p[i].address
			<< "\nSchool: " << p[i].school << "\nSex: " << p[i].sex << endl;}
		cout << "\nList of enrollee - 3, search by name - 2, add new data - 1, exit - 0: ";
        cin >> choice;
		}

		while(choice != 0 && choice != 1 && choice != 2)// choice input
		{
		    cout << "Error input!\n";
			cout << "\nSearch by name - 2, add new data - 1, exit - 0: ";
		    cin >> choice;
		}
	}
		delete [] p; //del all mem for end work prog
system("pause");
return 0;
}