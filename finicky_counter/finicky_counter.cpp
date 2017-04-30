#include <iostream>
using std::cout;
using std::endl;

int main () {
  short unsigned int i = 0;
  while (i <= 10) {
    i++;
    if (i == 5) {
      continue;
    }
    cout << i << endl;
  }
  return 0;
}