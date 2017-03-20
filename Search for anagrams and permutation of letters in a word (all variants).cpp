#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

//Prototypes of functions
void variantPerest();
int factorial (int x);
void sravnStr();
void menu();

int main()
{
setlocale(LC_ALL, "Russian");

cout << "Welcome to Word Processor 2000!\n";
menu();

cout << endl;


system("pause");
return 0;

}

// Anagram function (Check for a fool)
void sravnStr()
{
char str[20], str2[20];
int w, i, srav;
do
{
	cout << "\nSo enter your words or 2 numbers.\n(Which consist of identical numbers or letters, but rearranged with each other.)\n"
	<< "First word or number: ";
	cin >> str;
	cout << "Second word or number: \n";
	cin >> str2;
	
	i=strlen(str); w=strlen(str2); // Determine the length of words
	
	srav = strcmp(str,str2); // Compare the length of the first and second
	if (srav == 0)
		cout << "Error! You do not understand how the program works: you need to enter two words that have the same letters, but in different places are.\n"
		<< "And you entered two identical words..... (facepalm)\n";
	if (i != w)
		cout << "\nError! You have either few or many letters in the first or second word.\n";
	if (i == w && srav != 0)
	{
		cout << "All ok, starts comparing.";
		for (int asd=0; asd<10;asd++)
			cout << ".";
		cout << "\n";
		break;
	}
}while(true);

// Anagram function
int q=0;
char *pPo = strpbrk(str2, str);
cout << "\Symbols that are in both words: ";
while (pPo != NULL)                                         // Until there is something to match
  {
    cout << *pPo << " ";                               // coincidence
    pPo = strpbrk (pPo+1,str);                                // Match search
	q++;
  }

if((w-q)==0)
	cout << "\nYes, this is an anagram!\n";
else
	cout << "\nYou still managed to get that word out here, but the computer noticed everything.\n"
	<< "But in this in this word do not match the characters with the first word. Namely " << w-q << " letters;";
}// end anagram function

// Function of the program menu
void menu()
{
	int choice;
	cout << "\n\t\tProgram menu\n"
		<< "1) Check for anagram.\n"
		<< "2) Variants of permutation of symbols (1 word or number)\n"
		<< "\tEnter the number of your choice:\n";
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
			variantPerest();
			break;
		}
	default:
		cout << "\nThere is no such choice. You went against the system, then I did too. Bye.\n" << endl;
	}
}//end function of the program menu

//The permutation function
void variantPerest()
{
	int wordlen, reshuffle;
	char word[20];
	
	do
	{
	cout << "\tThe program for the replacement of letters.\n"
		<< "Enter your word or number (maximum 20 characters).\n";
	cin >> word; cout << endl;
	if(strlen(word) > 1)
		break;
	cout << "\nOne symbol can not be changed. Enter the normally:\n";
	} while(true);

	wordlen = strlen(word); // Define the length of the word, for the factorial
	reshuffle = factorial(wordlen); // Determine the number of permutations of letters

	int n = 0, m = 1; // "Counters of letter indices"
	
	// Swapping cycle
	for(reshuffle; reshuffle>0; reshuffle--)
	{
		// Put the symbol in the pointer
		char *bukv1 = new char;
		*bukv1 = word[n];
		char *bukv2 = new char;
		*bukv2 = word[m];

		// Change the letters in places
		word[m] = *bukv1;
		word[n] = *bukv2;
		
		n++; m++;   // Move symbol indices to the following symbols
		
		cout << word << endl;   // Print the full word
		
		if(m == wordlen)   // If the whole word has changed
			{n = 0; m = 1;}   // Zero the index counters
	}

	cout << "\nAll " << factorial(wordlen) << " permutation options.(Including your)\n";

} // end the permutation function

// The auxiliary factorial function, for permutation
int factorial (int x) 
{ 
 if( x == 0 ) return 1;
 return x * factorial (x - 1);
}
