#include <iostream>
using namespace std;

int main() {
	string firstName = "John ";
	string lastName = "Doe";
	string fullName = firstName + lastName;
	cout << fullName << "\n";
	
	string fullName2 = firstName + " " + lastName;
	cout << fullName2 << "\n";
	
	string fullName3 = firstName.append(lastName);
	cout << fullName3 << "\n";
	
	
	//to get length of a string
	string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "The length of the txt string is: " << txt.length() << "\n";
	
	//to select a character
	cout << "The third character is " << txt[2] << "\n";
	cout << "The last character is " << txt[txt.length()-1] << "\n";
	//OR
	string myString = "Hello";
	cout << myString<< "\n"; // Outputs Hello
	cout << myString.at(0)<< "\n";  // First character
	myString.at(0) = 'J';
	cout << myString<< "\n";  // Outputs Jello
	
	// how to use escape backslash \' \" \\
	string txt2 = "We are the so-called \"Vikings\" from the north.";
	
	/*user input: cin would consider space a terminating character
	use getline instead: always takes cin as the first parameter
	*/
string fullNamen;
cout << "Type your full name: ";
getline (cin, fullNamen);
cout << "Your name is: " << fullNamen;

char greeting2[] = "Hello";  // C-Style String (an array of characters)


  return 0;
}