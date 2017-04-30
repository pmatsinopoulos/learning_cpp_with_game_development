#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    cout << i << ' ';
  }

  cout << endl;

  for (int i = 9; i >= 0; i--) {
    cout << i << ' ';
  }
  cout << endl;

  for (int i = 0; i <= 50; i += 5) {
    cout << i << ' ';
  }
  cout << endl;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      cout << i << "," << j << " ";
    }
    cout << endl;
  }

  int i = 0;
  for (; i < 10;) {
    cout << i << ' ';
    i++;
  }

  cout << endl;
  return 0;
}
