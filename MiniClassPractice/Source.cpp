#include <iostream>
#include <clocale>
#include "StudentGroup.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int choice, ok=1, index=0;
	char lname[20]; int n;
	char name[20];
	StudentGroup *students = new StudentGroup[10];
do
{
	cout << "\nSearch - 3, Base - 2, Add new student - 1, exit - 0\n";
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
			  cout << endl;
			  students[index].SetFirstName(name);
			  cout << "\nInput last name: ";
			  cin >> lname;
			  students[index].SetLastName(lname);
			  cout << "\nScore English: ";
			  cin >> n;
			  students[index].SetEng(n);
			  cout << "\nScore History: ";
			  cin >> n;
			  students[index].SetHist(n);
			  cout << "\nScore Physics: ";
			  cin >> n;
			  students[index].SetPhys(n);
			  students[index].GetAveScore();
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
				<< "Last name: " << students[i].GetLastName()
				<< "English score: " << students[i].GetEng()
				<< "History score: " << students[i].GetHist()
				<< "Physics score: " << students[i].GetPhys()
				<< "Average score: " << students[i].GetAveScore() << endl;
			}
			cout << "\n\tBASE END\n";
			break;
		}
	case 3:
		{
			char findName[20];
			cout << "Enter name: ";
			cin >> findName;
			int signalSearch = 0;
			cout << "\n\tU FIND:\n";
			for (int i = 0; i<index; i++)
			{
				if (strcmp (findName, students[i].GetFirstName()) == 0)
				{
				cout << "\nName: " << students[i].GetFirstName()
				<< "\nLast name: " << students[i].GetLastName()
				<< "\nEnglish score: " << students[i].GetEng()
				<< "\nHistory score: " << students[i].GetHist()
				<< "\nPhysics score: " << students[i].GetPhys()
				<< "\nAverage score: " << students[i].GetAveScore() << endl;
				signalSearch++;
				}
			}
			if (signalSearch == 0)
				cout << "Find such entrant not exist.\n";
		break;
		}
	default:
		cout << "\nWrong choice.\n";
	}
}while(ok);
system ("pause");
return 0;
}