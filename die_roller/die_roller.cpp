#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
  // seed random number generator
  srand(static_cast<unsigned int>(time(0)));
  // generate random number
  int randomNumber = rand();
  // get a random number between 1 and 6;
  int die = (randomNumber % 6) + 1;

  cout << "\nYou rolled a " << die << endl;
  
  return 0;
}
