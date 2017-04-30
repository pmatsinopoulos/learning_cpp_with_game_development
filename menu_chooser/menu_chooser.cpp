#include <iostream>
using namespace std;

int main () {
  cout << "Please choose difficulty level: " << endl;

  cout << "1 - Easy" << endl;
  cout << "2 - Average" << endl;
  cout << "3 - Hard" << endl;

  short unsigned int answer;
  cin >> answer;

  switch (answer) {
  case 1: cout << "You have chosen easy level" << endl;
    break;
  case 2: cout << "You have chosen average level" << endl;
    break;
  case 3: cout << "You have chosen hard level" << endl;
    break;
  default: cout << "This is an invalid option" << endl;
  };

  return 0;
}
