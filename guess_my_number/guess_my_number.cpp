#include <iostream>
#include <ctime>
using namespace std;

int main () {
  int guess;
  srand(static_cast<unsigned int>(time(0)));
  int number = (rand() % 100) + 1;
  bool found = false;
  char answer = 'y';

  while (answer == 'y' && !found) {
    cout << "What is the number? (1..100)" << endl;
    cin >> guess ;
    if (guess < number) {
      cout << "Your guess is low. Try a greater number" << endl;
    }
    else if (guess > number) {
      cout << "Your guess is high. Try a smaller number" << endl;
    }
    else {
      cout << "Bingo! You just found the number" << endl;
      found = true;
    }
    if (!found) {
      cout << "Do you want to try again? (y/n)" << endl;
      cin >> answer;
    }
  } // while

  return 0;
}
