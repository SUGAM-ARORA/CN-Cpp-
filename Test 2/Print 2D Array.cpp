#include <iostream>
using namespace std;

void print2DArray(int **input, int row, int col) {
  int k = row;
  for (int i = 0; i < row; i++) {
    for (int l = k - 1; l >= 0; l--) {
      for (int j = 0; j < col; j++) {
        cout << input[i][j] << " ";
      }
      cout << endl;
    }
    k--;
  }
}
