#include <iostream>
#include <string.h>
using namespace std;

long double fact(int N); // Function for finding factorials

int main()
{
	int wordlen, reshuffle;
	char word[20];
	//setlocale(LC_ALL, "Russian");
	
	do
	{
	cout << "The program for the replacement of letters.\n"
		<< "Enter your word (a maximum of 20 characters) and you will be given all the options for rearranging the letters.\n";
	cin >> word;
	if(strlen(word) > 1)
		break;
	cout << "\n1 letter can not be changed. Enter the norms:\n";
	} while(true);

	wordlen = strlen(word); // Define the length of the word, for the factorial
	reshuffle = fact(wordlen); // Determine the number of permutations of letters (ready-made words)

	int n = 0, m = 1; // "Counters of letter indices"
	
	//Swapping cycle
	for(reshuffle; reshuffle>0; reshuffle--)
	{
		// We put a letter in the index
		char *bukv1 = new char;
		*bukv1 = word[n];
		char *bukv2 = new char;
		*bukv2 = word[m];

		// Swap letters
		word[m] = *bukv1;
		word[n] = *bukv2;

		/*// Clearing pointers
		*bukv1 = 0;
		*bukv2 = 0;
		delete bukv1;
		delete bukv2;*/
		
		n++; m++;   // Move the letter indices further
		
		cout << word << endl;   // Print the full word
		
		if(m == wordlen)   // If the whole word has changed
			{n = 0; m = 1;}   // If the whole word has changed
	}

	cout << "\nTotal " << fact(wordlen) << " variants of permutation.\n";

system ("pause");
return 0;
}

long double fact(int N)
{
        return N * fact(N - 1); // Recursion
}
