#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

//��������� �������
void variantPerest();
int factorial (int x);
void sravnStr();
void menu();

int main()
{
setlocale(LC_ALL, "Russian");

cout << "����� ���������� � ������������ 2000!\n";
menu();

cout << endl;


system("pause");
return 0;

}

//��� ������� ��������� � ������
void sravnStr()
{
char str[20], str2[20];
int w, i, srav;
do
{
	cout << "\n���� ������� ���� ����� ��� 2 �����. \n(������� ������� �� ���������� ���� ��� ����, �� �������������� ����� �����.)\n"
	<< "���� :   ";
	cin >> str;
	cout << "� ������� ������:   \n";
	cin >> str2;
	
	i=strlen(str); w=strlen(str2);
	
	srav = strcmp(str,str2);
	if (srav == 0)
		cout << "������! �� �� ������ ��� �������� ���������: ����� ������ ��� ����� � ������� ���������� �������, �� � ������ ������ �����.\n"
		<< "� �� ����� ��� ���������� �����..... (facepalm)\n";
	if (i != w)
		cout << "\n������! � ��� ��� ���� ��� ����� �����, ������ ������ ����� ��� �����.\n";
	if (i == w && srav != 0)
	{
		cout << "��� ��, �������� ����������.";
		for (int asd=0; asd<10;asd++)
			cout << ".";
		break;
	}
}while(true);

// �������� ���������
int q=0;
char *pPo = strpbrk(str2, str);
cout << "\n����� �����: ";
while (pPo != NULL)                                         // ���� ���� ���� ���������(1 ��� ����, 2 �������� �������)
  {
    cout << *pPo << " ";                               // ���������
    pPo = strpbrk (pPo+1,str);                                // ����� ����������
	q++;
  }

if((w-q)==0)
	cout << "\n�����! ��� ���������!\n";
else
	cout << "\n��� ��� ���� ������� ��������� ���� ��� �����, �� ��������� ��� �������.\n" << w-q << " ������ ����. (�� ��� � ������ ����� ��������� �����.)";
}// ����� ������� ���������

//������� �������� ����
void menu()
{
	int choice;
	cout << "\n--------���� ���������--------\n"
		<< "1) ��������� ����� ��� \"�������� �� ���������\". \n(������� ����� ���������� �����, ������� ��������.)\n"
		<< "2) �������� ������������ ���� (� �����) � �����\n"
		<< "-----������� ����� ������-----\n";
	cin >> choice;
	switch (choice)
	{
	case 1: 
		{
			sravnStr();
			cout << endl;
			break;
		}
	case 2:
		{
			cout << "\n� ����������, �� ��� ����� ��������.(� ����� ��� �������� ������������.)\n" << endl;
			variantPerest();
			break;
		}
	default:
		cout << "\n������ ������ �� ����������. �� ����� ������ �������, ����� � ����. ����.\n" << endl;
	}
}//������� ��.����.�����������

//������� ������������ (����������)
void variantPerest()
{
	int g; char N[20];
	cout << "\n������, ����������, ��� ���� ���-�� ��������. \n� ����� ���������� ��������� ������������ ������� ���� ��� ����� � ���� ������)\n"
		<< "������� ����� ��� �����:   ";
	cin >> N;
	g=strlen(N);
	if (g>=-1 && g<=1)
		cout << "\n�� ��, ������� ��������. ��-��.\n � ���������.\n";
	else
	{
	g = abs(g);
	cout << "����� ���������� ����������� ���� � ���� ����� (��� ���� � �����, ���� �� ��� �����): " << g * factorial(g - 1);
	}

} // ������� ������������ �����������

//��������������� ������� ����������, ��� ������������
int factorial (int x) 
{ 
 if( x == 0 ) return 1;
 return x * factorial (x - 1);
}