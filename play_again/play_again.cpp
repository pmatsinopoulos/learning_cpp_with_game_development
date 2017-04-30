#include <iostream>
using namespace std;

int main () {
  char answer = 'y';
  while (answer == 'y') {
    cout << "** Played an exciting game ** " << endl;
    cout << " Do you want to play again ? (y/n) " << endl;
    cin >> answer;
  }
  return 0;
}

