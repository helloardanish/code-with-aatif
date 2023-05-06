#include <iostream>

using namespace std;
int main() {

  int matrix[2][3][4] = {
  {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
  },
  {
    {13,14,15,16},
    {17,18,19,20},
    {21,22,23,24}
  }
  };

  // 3D matrix
  // multi-dimensional matrix

  int row = sizeof(matrix) / sizeof(matrix[0]);
  int column = sizeof(matrix[0]) / sizeof(matrix[0][0]);
  int height = sizeof(matrix[0][0]) / sizeof(int);

  cout << "row "<< row<<", column " << column << " height " << height << endl;
  int sumofamatrix = 0;


  for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
      for(int k=0; k<height; k++){
        cout << "(" << i << ", " << j << ", "  << k << ")"
           << " = " << matrix[i][j][k] << endl;
      }
    }
  }

//  cout << "Total sum of matrix zigzag is " << sumofamatrix << endl;

  return 0;
}
