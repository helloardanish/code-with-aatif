#include <iostream>
#include <string>

using namespace std;
int main() {
  

  int matrix[4][4] = {
      {9, 13, 5, 2}, {1, 11, 7, 6}, {3, 7, 4, 1}, {6, 0, 7, 10}};

  int row2 = sizeof(matrix) / sizeof(matrix[0]);
  int column2 = sizeof(matrix[0]) / sizeof(int);

  int sumofamatrix = 0;
  for (int i = 0; i < row2; i++) {
    for (int j = 0; j < column2; j++) {
      int temp = matrix[i][j];

      sumofamatrix += temp;
      /*
      cout << "(" << i << ", " << j << ")"
           << " = " << temp << endl;
      */
    }
  }


  cout << "Total sum of matrix is " << sumofamatrix << endl;
  
  return 0;
}
