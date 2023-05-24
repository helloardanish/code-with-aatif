
#include <iostream>
#include <math.h>
using namespace std;

int main(){
int x;
  cout <<"enter a numbmer : ";
  cin>>x;


int sum=0;
  while(x>0){
    int rem=x%10;
    x=x/10;
    sum=sum+rem;
    
  }
  cout << "sum of digit is : "<<sum;

  
   return 0;
   }
