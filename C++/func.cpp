#include <iostream>
using namespace std;

void myFunction() {
  cout << "I just got executed!" << endl;
}

//this is a function with a default parameter
void myFunction2(string country = "Norway") {
  cout << country << "\n";
}

//this function returns an int value
int myFunction3(int x) {
  return 5 + x;
}

// IMPORTANT pass by reference when you want to change values of the arguments
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

//arrays are always passed by reference to a function

//function overloading example
int myFunction4(int x);
float myFunction4(float x);
double myFunction4(double x, double y);

//remember local vs global variables

int main() {

myFunction();

myFunction2("India");
myFunction2();

cout << myFunction3(3);

 int firstNum = 10;
 int secondNum = 20;
 
 cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}