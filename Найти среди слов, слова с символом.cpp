#include <iostream> 
#include <string>
#include <cstring>
using namespace std;

int main() 
{ 
setlocale(LC_ALL, "Russian");
const int spisok = 200; // ���������� �������� ������� �� ������ �������� (��� ����� ������)
char str[spisok]; char by; 
char* ptr; 
cout << "������� ����� � ������� ����� ����� ������������ ������:\n" << endl;
cin.getline(str, spisok); // ������ ���� �����
cout << "\n������� ������ �����:\n" << endl;
cin >> by; cout << endl;   // ���� ���� ������ �����

//���������� 1 ��������(�� �� � ����������), � ��� ����� ����, 2� ��� �����������.
ptr = strtok(str, " ");

while(ptr != NULL) 
{ 
	int size = strlen(ptr); 

	for ( int i = 0; i < size; i++) 
		if(ptr[i] == by) 
		{
			cout << ptr << endl;
			break;
		}
     
	ptr = strtok(NULL, " "); 
}

system("pause");
return 0;
}