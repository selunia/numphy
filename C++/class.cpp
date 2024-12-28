#include <iostream>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
    //add a method (class-specific function) defined inside
   void myMethod() {  // Method/function defined inside the class
      cout << "Hello World! \n";
    }
   void myMethod2(); //this method is defined later outside of the class definition
};

//define a method outside class 
//DOESNT WORK WITH MY COMPILER BUT WORKS ELSWEWHERE
 
void MyClass::myMethod2(){
  cout << "Hello World!2 \n";
} 

//an example of a class with a constructor (a method called when an object is created)

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {

MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";
  
  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;

//to call a method, you have to start with the specific object of that class
myObj.myMethod();
myObj.myMethod2();

  // Create Car object and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";

  return 0;
}