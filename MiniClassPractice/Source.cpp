#include <iostream>
#include <clocale>
#include "StudentGroup.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int choice, ok=1, index=0;
	char name[20], lname[20]; int n;
	StudentGroup students[10];
do
{
	cout << "Base - 2, Add new student - 1, exit - 0\n";
	cin >> choice;
	switch (choice)
	{
	case 0:
		  {ok = 0; break;}
	case 1:
		  {
			  if (index == 10)
				  cout << "\nU add all 10 student.\n";
			  else
			  {
			  cout << "\nInput first name: ";
			  cin >> name;
			  students[index].SetFirstName(name);
			  cout << "\nInput last name: ";
			  cin >> lname;
			  students[index].SetLastName(name);
			  cout << "\nScore English: ";
			  cin >> n;
			  students[index].SetEng(n);
			  cout << "\nScore History: ";
			  cin >> n;
			  students[index].SetHist(n);
			  cout << "\nScore Physics: ";
			  cin >> n;
			  students[index].SetPhys(n);
			  students[index].SetAveScore();
			  index++;
			  break;
			  }
		  }
	case 2:
		{
			cout << "\n\tBASE STUDENT\n";
			for(int i=0; i<index; i++)
			{
				cout << "\nName: " << students[i].GetFirstName()
				<< "\nLast name: " << students[i].GetLastName()
				<< "\nEnglish score: " << students[i].GetEng()
				<< "\nHistory score: " << students[i].GetHist()
				<< "\nPhysics score: " << students[i].GetPhys()
				<< "\nAverage score: " << students[i].GetAveScore() << endl;
			}
			break;
		}
	default:
		cout << "\nWrong choice.\n";
	}
}while(ok);
system ("pause");
return 0;
}