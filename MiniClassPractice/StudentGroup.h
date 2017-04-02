#pragma once
class StudentGroup
{
public:
	StudentGroup(void);
	~StudentGroup(void);
	void SetEng(int Eng);
	void SetHist(int Hist);
	void SetPhys(int Phys);
	void SetFirstName(char name[]);
	void SetLastName(char ln[]);
	char *GetFirstName();
	char *GetLastName();
	int GetEng();
	int GetHist();
	int GetPhys();
	float GetAveScore();
private:
	char firstName[20], lastName[20];
	int English, History, Physics;
	float averageScore;
};

