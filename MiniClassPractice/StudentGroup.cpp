#include "StudentGroup.h"
#include <iostream>
using namespace std;


StudentGroup::StudentGroup(void)
{
	English = 0;
	History = 0;
	Physics = 0;
}

StudentGroup::~StudentGroup(void)
{
}

void StudentGroup::SetEng(int Eng)
{
	if(Eng > 0 && Eng <= 5)
		{
			English = Eng;
		}
	else
	{
		cout << "\nWrong score.\n";
	}
}
void StudentGroup::SetHist(int Hist)
{
	if(Hist > 0 && Hist <= 5)
		History = Hist;
	else
		cout << "\nWrong score.\n";
}
void StudentGroup::SetPhys(int Phys)
{
	if(Phys > 0 && Phys <= 5)
		Physics = Phys;
	else
		cout << "\nWrong score.\n";
}
void StudentGroup::SetFirstName(char fn[20]){firstName[20] = fn[20];}
void StudentGroup::SetLastName(char ln[20]){lastName[20] = ln[20];}

char StudentGroup::GetFirstName(){return firstName[20];}
char StudentGroup::GetLastName(){return lastName[20];}
int StudentGroup::GetEng(){return English;}
int StudentGroup::GetHist(){return History;}
int StudentGroup::GetPhys(){return Physics;}

void StudentGroup::SetAveScore()
{
	float averageScore = 3/(English + History + Physics);
}
float StudentGroup::GetAveScore(){return averageScore;}