#include <iostream>
#include <fstream>
using namespace std;

class Worker
{
public:
	//Worker (char name[10], int exp , int hmh, int houWage) {}
	void SetFamilia(char name[10]) {familia[10] = name[10];} // not work
	void SetExperience(int exp) {Experience = exp;}
	void SetHourlyWage(int houWage) {HourlyWage = houWage;}
	void SetHowMuchHours(int hmh) {HowMuchHours = hmh;}
	void SetSalary(int HowMuchHours, int HourlyWage) { Salary = HowMuchHours * HourlyWage; }
	void SetPremy(int HowMuchHours)
	{
		int year = 8760;
		if (HowMuchHours < year)
			Premy = 0;
		if (HowMuchHours > year && HowMuchHours < (3*year))
			Premy = (Salary / 100) * 5; // 5%
		if (HowMuchHours > (3*year) && HowMuchHours < (5*year))
			Premy = (Salary / 100) * 8; // 8%
		if (HowMuchHours > (5*year))
			Premy = (Salary / 100) * 15; // 15%
	}

	char GetFamilia() {return familia[10];}
	int GetExperience() {return Experience;}
	int GetSalary() {return Salary;}
	int GetHourlyWage() {return HourlyWage;}
	int GetHowMuchHours() {return HowMuchHours;}
	double GetPremy() {return Premy;}
	void PrintAll()
	{
		cout << GetFamilia() << endl <<
			"Experience is " << GetExperience() << endl <<
			"Hourly wage is " << GetHourlyWage() << endl <<
			GetFamilia() << " has woreked " << GetHowMuchHours() << " hours" <<
			"\nSalary is " << GetSalary() <<
			"\nPremy is " << GetPremy() <<
			"\nInformation about " << GetFamilia() << " was written in file (*in developing*)\n"; // in developing
	}
private:
	char familia[10];
	int Experience, Salary, HourlyWage, HowMuchHours;
	double Premy;
};

int main()
{
	char name[10];
	int exp, houWage, hmh;
	Worker man;
	cout << "Enter worker's name: ";
	cin >> name;
	man.SetFamilia(name);
	cout << "\n Enter worker's experience: ";
	cin >> exp;
	man.SetExperience(exp);
	cout << "\n Enter worker's wag: ";
	cin >> houWage;
	man.SetHourlyWage(houWage);
	cout << "\n Enter how mush hours " << name << " has worked: ";
	cin >> hmh;
	man.SetHowMuchHours(hmh);
	man.SetSalary(hmh, houWage);
	man.SetPremy(hmh);

	man.PrintAll();

system("pause");
return 0;
}