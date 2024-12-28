#include <iostream>
using namespace std;

int main() {

string food = "Pizza";  // food variable
string &meal = food;    // reference to food

cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza

cout << &food << endl; 

string* ptr = &food;
// this will output the address of food
cout << ptr << "\n";
// this will output the value of food
cout << *ptr << "\n";

// Change the value of the pointer
*ptr = "Hamburger";
// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";
// Output the new value of the food variable (Hamburger)
cout << food << "\n";


  return 0;
}