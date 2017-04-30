#include <iostream>
using namespace std;

int main () {
  char answer;
  do {
    cout << "** Played an exciting game ** " << endl;
    cout << " Do you want to play again ? (y/n) " << endl;
    cin >> answer;
  } while (answer == 'y');

  return 0;
}

