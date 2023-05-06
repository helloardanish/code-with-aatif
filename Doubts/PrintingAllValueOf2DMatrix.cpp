#include <iostream>
#include <string>

using namespace std;
int main() {

  /*

  arr =  [1,2,3,4,5]

    */

  /*

    1   2   3   4
    5   6   7   8

    order >> 2 * 4 >> row * column

    index >> 1 >> (0,0)
    index >> 2 >> (0,1)
    index >> 3 >> (0,2)
    index >> 4 >> (0,3)
    index >> 5 >> (1,0)

  ....

  index >> 8 >> (1,3)



  2 D > Two loop
    */


  

  int arr[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

  // int row = 2;

  int row = sizeof(arr) / sizeof(arr[0]);
  int column = sizeof(arr[0]) / sizeof(int);

  cout << "row = " << row << ", column = " << column << endl;

  // accessing value of matrix
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cout << "(" << i << ", " << j << ")"
           << " = " << arr[i][j] << endl;
    }
  }


  


  return 0;
}
