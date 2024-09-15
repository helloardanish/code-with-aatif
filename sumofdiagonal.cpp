
#include <iostream>
using namespace std;

int main() {

   int arr[4][4]={
                 {1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12},
                 {13,14,15,16}
                 };

     int row = sizeof(arr) / sizeof(arr[0]);
     int cols = sizeof(arr[0]) / sizeof(int);
     int sum = 0;
          for(int i = 0; i < row; i++){
              for(int j = 0; j < cols; j++){
                  if(i==j){
                 sum = sum + arr[i][j];
                 }
           } 
      }
      cout << "sum of these diagonal matrix is : " <<sum;








    return 0;
}
