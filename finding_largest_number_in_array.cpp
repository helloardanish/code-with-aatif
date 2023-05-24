#include <iostream>
#include <math.h>
using namespace std;


int main(){
int arr[10]={12,13,45,65,34,23,54,66,56,89};
int largest=arr[0];

  for(int i=0; i<10;i++){
    cout << "array is "<<arr[i] <<endl;
    if(largest<arr[i]){
      largest=arr[i];
    }
  }

cout<< "largest number is : "<<largest;

  
 return 0;
   }
