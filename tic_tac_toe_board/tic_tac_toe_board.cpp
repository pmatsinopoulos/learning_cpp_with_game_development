#include <iostream>
using namespace std;

int main() {
  const int ROWS = 3;
  const int COLUMNS = 3;
  char board[ROWS][COLUMNS] = {
    {'O', 'X', 'O'},
    {' ', 'X', 'X'},
    {'X', 'O', 'O'}
  };

  cout << "Here is the board: " << endl;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      cout << board[i][j];
    }
    cout << endl;
  }
  cout << endl;

  board[1][0] = 'X';

  cout << "Here is the board: " << endl;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      cout << board[i][j];
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}
