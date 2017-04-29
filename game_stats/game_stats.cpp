// Demonstrates Arithmetic Operations with Variables

#include <iostream>
using namespace std;

int main() {
  unsigned int score = 50000;
  cout << "score: " << score << endl;

  score += 100;
  cout << "score: " << score << endl;

  int lives = 3;
  ++lives;
  cout << "lives: " << lives << endl;

  lives = 3;
  lives++;
  cout << "lives: " << lives << endl;

  lives = 3;
  int bonus = ++lives * 10;
  cout << "lives, bonus = " << lives << ", " << bonus << endl;
  
  lives = 3;
  bonus = lives++ * 10;
  cout << "lives, bonus = " << lives << ", " << bonus << endl;

  score = 4294967295;
  cout << "score: " << score << endl;
  ++score;
  cout << "score: " << score << endl;

  int score2 = INT_MAX;
  cout << "score2: " << score2 << endl;
  score2++;
  cout << "score2: " << score2 << endl;

  return 0;
}
