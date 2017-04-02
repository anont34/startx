#include "StudentGroup.h"
#include <iostream>
#include <cstring>
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
void StudentGroup::SetFirstName(char name[]){strcpy(firstName, name);}
void StudentGroup::SetLastName(char ln[]){strcpy(lastName, ln);}

char *StudentGroup::GetFirstName(){return firstName;}
char *StudentGroup::GetLastName(){return lastName;}
int StudentGroup::GetEng(){return English;}
int StudentGroup::GetHist(){return History;}
int StudentGroup::GetPhys(){return Physics;}

float StudentGroup::GetAveScore()
{
	float averageScore = (English + History + Physics)/3;
	return averageScore;
}