#include <iostream>
#include <string.h>
using namespace std;

// функция для нахождения факториала
// она отвечает за количество возможных перестановок
long double fact(int N);

int main()
{
	int wordlen, reshuffle;
	char word[20];
	setlocale(LC_ALL, "Russian");
	
	do
	{
	cout << "Программа по престановке букв.\n"
		<< "Введите ваше слово(максимум 20 символов) и вам выдаст все варианты перестановки букв.\n";
	cin >> word;
	if(strlen(word) > 1)
		break;
	cout << "\n1 букву особо не переставишь. Введите норм:\n";
	} while(true);

	wordlen = strlen(word); // опеределяем длину слово, для факториала
	reshuffle = fact(wordlen); // определяем число перестановок букв(готовых слов)

	int n = 0, m = 1; // "счетчики индексов букв"
	
	//цикл перестановки
	for(reshuffle; reshuffle>0; reshuffle--)
	{
		// закидываем букву в указатель
		char *bukv1 = new char;
		*bukv1 = word[n];
		char *bukv2 = new char;
		*bukv2 = word[m];

		// меняем местами буквы
		word[m] = *bukv1;
		word[n] = *bukv2;

		/*// очищаем указатели
		*bukv1 = 0;
		*bukv2 = 0;
		delete bukv1;
		delete bukv2;*/
		
		n++; m++;   // перемещаем индексы букв дальше
		
		cout << word << endl;   // печатаем полное слово
		
		if(m == wordlen)   // если все слово изменилось
			{n = 0; m = 1;}   // обнуляем счетчики индексов
	}

	cout << "\nВсего " << fact(wordlen) << " вариантов перестановки.\n";

system ("pause");
return 0;
}

long double fact(int N)
{
        return N * fact(N - 1); // рекурсия
}
