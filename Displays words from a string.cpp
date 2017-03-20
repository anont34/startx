#include <iostream> 
#include <string>
#include <ctype.h>
using namespace std;

bool GetWord(char* string, char* word, int& wordOffset);

int main() 
{ 
	const int bufferSize = 255;
	char buffer[bufferSize+1];
	char word[bufferSize+1];
	int wordOffset = 0;

	cout << "Enter a string: ";
	cin.getline(buffer, bufferSize);
	
	while (GetWord(buffer,word,wordOffset))
	{
		cout << "Received word: " << word << endl;
	}

system("pause");
return 0;
}

bool GetWord(char* string, char* word, int& wordOffset)
{
	if (!string[wordOffset])
		return false;

	char *p1, *p2;
	p1 = p2 = string + wordOffset;

	for (int i = 0; i<(int)strlen(p1) && !isalnum(p1[0]); i++)
		p1++;

// Checking for a word
if (!isalnum(p1[0]))
	return false;
// pointer p1 start word. p2 too
p2 = p1;

// p2 move to end word
while (isalnum(p2[0]))
	p2++;

int len = int (p2-p1); // len word

//copy word too buffer
strncpy(word,p1,len);

// add symv line break
word[len] = '\0';

// search start next word

for (int i = int(p2-string); i<(int)strlen(string) && !isalnum(p2[0]); i++)
	p2++;

wordOffset = int(p2-string);

return true;
}