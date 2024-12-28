#include <iostream>
using namespace std;

int main() {
	

//if-else condition

int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}

//switch

int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}

int i = 0;
while (i < 5) {
  cout << i << "\n";
  i++;
}

i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 5);

for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}

//for-each loop loops through an array/data structure
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}

//break
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  cout << i << "\n";
}

	
  return 0;
}