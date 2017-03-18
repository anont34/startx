#include <iostream> 
#include <string>
#include <cstring>
using namespace std;

int main() 
{ 
setlocale(LC_ALL, "Russian");
const int spisok = 200; // Количество символов которые ты можешь написать (так проще менять)
char str[spisok]; char by; 
char* ptr; 
cout << "Введите слова в которых нужно найти определенный символ:\n" << endl;
cin.getline(str, spisok); // вводим свои слова
cout << "\nВведите нужный симол:\n" << endl;
cin >> by; cout << endl;   // Твоя бува котоая нужна

//сравниваем 1 аргумент(он же и изменяется), в нем поиск слов, 2й это разделители.
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