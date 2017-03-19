#include <iostream> 
#include <string>
#include <cstring>
using namespace std;

int main() 
{ 
//setlocale(LC_ALL, "Russian"); // not work
const int listwords = 200; // The number of characters you can write
char str[listwords]; char sy; 
char* lexemes; 
cout << "Enter the words (Using as space separator) in which you want to find the desired symbol:\n" << endl;
cin.getline(str, listwords); // Enter your words
cout << "\nEnter the character you want to find in the words:\n" << endl;
cin >> sy; cout << endl;   // Your character is needed

// Separation of words into lexemes, using spaces (the 1st argument changes, the 2nd is a space)
lexemes = strtok(str, " ");

cout << "\nWords with a symbol \"" << sy << "\":\n";

while(lexemes != NULL) 
{ 
	int size = strlen(lexemes); 

	for ( int i = 0; i < size; i++) 
		if(lexemes[i] == sy) 
		{
			cout << lexemes << endl;
			break;
		}
     
	lexemes = strtok(NULL, " "); 
}

system("pause");
return 0;
}
