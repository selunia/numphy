#include <iostream>
using namespace std;

int main() {

struct {
  int myNum;
  string myString;
} myStructure;

// Assign values to members of myStructure
myStructure.myNum = 1;
myStructure.myString = "Hello World!";

// Print members of myStructure
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";

struct {
  int myNum;
  string myString;
} myStruct1, myStruct2, myStruct3;


// I can treat struct as datatype if I name it 

struct myDataType { // This structure is named "myDataType"
  int myNum;
  string myString;
};

myDataType myVar;

  return 0;
}