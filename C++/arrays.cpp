#include <iostream>
using namespace std;

int main() {

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0];

// can omit array size (only if immediately specifying elements)
string cars2[] = {"Volvo", "BMW", "Ford"}; // Three array elements

/* arrays size is fixed however if you need an array of dynamic size, use vectors 
which come in <vector> library 
*/


//sizeof() returns the size of the array in bytes
int myNumbers[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNumbers) << endl;
int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
cout << getArrayLength << endl;

string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

string letters2[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};

  return 0;
}