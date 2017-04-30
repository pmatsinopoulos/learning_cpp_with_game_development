#include <iostream>
#include <string>

using namespace std;
int main() {
  const int MAX_ITEMS = 10;
  string inventory[MAX_ITEMS];

  unsigned int numItems = 0;
  inventory[numItems++] = "sword";
  inventory[numItems++] = "shield";
  inventory[numItems++] = "armor";

  cout << "Your items are: " << endl;
  for (unsigned int i = 0; i < numItems; i++) {
    cout << inventory[i] << endl;
  }

  cout << "You trade your sword for a battle axe" << endl;
  inventory[0] = "battle axe";

  cout << "Your items are: " << endl;
  for (unsigned int i = 0; i < numItems; i++) {
    cout << inventory[i] << endl;
  }

  if (numItems < MAX_ITEMS) {
    inventory[numItems++] = "healing position";
  }

  cout << "Your items are: " << endl;
  for (unsigned int i = 0; i < numItems; i++) {
    cout << inventory[i] << endl;
  }


  return 0;
}
