#include <iostream>
#include <string.h>
using namespace std;

long double fact(int N); // ������� ��� ���������� ����������

int main()
{
	int wordlen, reshuffle;
	char word[20];
	setlocale(LC_ALL, "Russian");
	
	do
	{
	cout << "��������� �� ����������� ����.\n"
		<< "������� ���� �����(�������� 20 ��������) � ��� ������ ��� �������� ������������ ����.\n";
	cin >> word;
	if(strlen(word) > 1)
		break;
	cout << "\n1 ����� ����� �� ����������. ������� ����:\n";
	} while(true);

	wordlen = strlen(word); // ����������� ����� �����, ��� ����������
	reshuffle = fact(wordlen); // ���������� ����� ������������ ����(������� ����)

	int n = 0, m = 1; // "�������� �������� ����"
	
	//���� ������������
	for(reshuffle; reshuffle>0; reshuffle--)
	{
		// ���������� ����� � ���������
		char *bukv1 = new char;
		*bukv1 = word[n];
		char *bukv2 = new char;
		*bukv2 = word[m];

		// ������ ������� �����
		word[m] = *bukv1;
		word[n] = *bukv2;

		/*// ������� ���������
		*bukv1 = 0;
		*bukv2 = 0;
		delete bukv1;
		delete bukv2;*/
		
		n++; m++;   // ���������� ������� ���� ������
		
		cout << word << endl;   // �������� ������ �����
		
		if(m == wordlen)   // ���� ��� ����� ����������
			{n = 0; m = 1;}   // �������� �������� ��������
	}

	cout << "\n����� " << fact(wordlen) << " ��������� ������������.\n";

system ("pause");
return 0;
}

long double fact(int N)
{
        return N * fact(N - 1); // ��������
}