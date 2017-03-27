#include <iostream>
#include <fstream>
using namespace std;

struct Human
{
	char *name;
	int age;
};

int main()
{
	Human *p = new Human[1];

	int choice = 1;
	int size = 1;

	while (choice)
	{
		if(size == 1)
		{
			cout << "Name: ";
			cin >> p[size-1].name;
			cout << "Age: ";
			cin >> p[size-1].age;
			cout << "Elements struct obj P: " << p[size-1].name << " " << p[size-1].age << ";\n";
		}
		else //size > 1
		{
			Human *copy = new Human [size-1]; // new strct for copy data
			
			for(int i=0; i < size-1; i++)
			{
				strcpy(copy[i].name, p[i].name);
				copy[i].age = p[i].age;
			}

			delete [] p; // jailbreak memory

			p = new Human[size]; // new mem

			for (int i = 0; i < size-1; i++)
			{
				strcpy(p[i].name, copy[i].name);
				p[i].age = copy[i].age;
			}

			delete [] copy; // jailbreak mem

			cout << "Name: ";
			cin >> p[size-1].name;
			cout << "Age: ";
			cin >> p[size-1].age;

			for (int i = 0; i < size; i++)
			{cout << i << " elements struct obj P: " << p[i].name << "  " << p[i].age << ";\n";}
		}
		size++; // stchetchik+1

		cout << "\nAdd new data - 1, exit - 0: ";
        cin >> choice;
        while(choice != 0 && choice != 1)// choice input
        {
            cout << "Error input!\n";
                cout << "\nAdd new data - 1, exit - 0: ";
                cin >> choice;
        }
	}
		delete [] p; //del all mem for end work prog
system("pause");
return 0;
}
