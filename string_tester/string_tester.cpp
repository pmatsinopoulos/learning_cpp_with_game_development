#include <iostream>
#include <string>
using namespace std;

int main () {
  string word1 = "Game";
  string word2("Over");
  string word3(3, '!');

  string phrase = word1 + " " + word2 + word3;
  cout << "The phrase is " << phrase << endl;

  cout << "The phrase has " << phrase.size() << " characters in it.\n\n" ;

  cout << "The character at position 0 is " << phrase[0] << endl;

  cout << "The sequence 'Over' is found at position " << phrase.find("Over") << endl;

  phrase[0] = 'L';
  cout << "Now the phrase is " << phrase;

  if (phrase.find("eggplant") == string::npos) {
    cout << "eggplant is not found in " << phrase << endl;
  }

  phrase.erase(4, 5);
  cout << "Phrase is now " << phrase << endl;

  phrase.erase(2, 3);
  cout << "Phrase is now " << phrase << endl;

  phrase.erase();

  cout << "Phrase is now " << phrase << endl;

  phrase = "This is a long sentence creating using a literal string";
  for (unsigned int i = 0; i < phrase.length(); i++) {
    cout << "Character at position " << i << " is " << phrase[i] << endl;
  }
  return 0;
}