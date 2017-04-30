#include <iostream>
#include <string>
#include <ctime>

using namespace std;


int main () {
  enum fields {WORD, HINT, NUM_FIELDS};
  const int NUM_WORDS = 5;
  const string WORDS[NUM_WORDS][NUM_FIELDS] = {
    {"wall", "Do you feel like you are bunging your head onto something?"},
    {"glasses", "These might help you see the answer"},
    {"labored", "Going slowly isn't it?"},
    {"persistent", "Keep at it"},
    {"jumble", "Is what the game is all about"}
  };

  srand(static_cast<unsigned int>(time(0)));
  int choice = rand() % NUM_WORDS;
  string wordToGuess = WORDS[choice][WORD];
  string hintForWord = WORDS[choice][HINT];

  string jumbledWord = wordToGuess;

  // jumbling the word
  for (int i = 0; i < jumbledWord.length(); i++) {
    int a = rand() % jumbledWord.length();
    int b = rand() % jumbledWord.length();
    char temp = jumbledWord[a];
    jumbledWord[a] = jumbledWord[b];
    jumbledWord[b] = temp;
  }
  cout << "Jumbled word: " << jumbledWord << endl;
  cout << "Hint: " << hintForWord << endl;

  return 0;

  // .... more things to do to finish the game ...
}