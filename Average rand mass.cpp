#include <iostream>
#include <fstream>
using namespace std;

#include <ctime> // protot "Function of finding the arithmetic mean"
double avg(const int *arrayPtr, int size_array);

int main()
{
srand(time(0)); // random
const int length_array = 10; // rang mass
int vector[length_array]; // mass
 
for (int counter = 0; counter < length_array; counter++)
{
vector[counter] = rand() % 100; // fill mass
cout << vector[counter] << " "; // print element
}
cout << "\nfinding the arithmetic mean = "  << avg(vector, length_array) << endl; // start func
 
system("pause");
return 0;
}

double avg(const int *arrayPtr, int size_array) // Function of finding the arithmetic mean
{
int sum = 0; // storage sum arith
for (int counter = 0; counter < size_array; counter++)
{
sum += arrayPtr[counter]; // ++ sum
}
 
return (double)sum/size_array; // return result
}