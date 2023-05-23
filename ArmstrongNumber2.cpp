#include <iostream>
#include <math.h>
using namespace std;

int noOfDigits(int num){
  int count=0;
  while(num>0){
    num  = num/10;
    count++;
  }
  return count;
}

int main (){
 int n;
 cout << "Enter a number : ";
 cin>>n;
  //keeping original values
  int orgnum = n;
 int nod = noOfDigits(n);

  int sum=0;

  while(n>0){
    int lastnum = n%10;
    //sum = sum + pow(lastnum,nod);
    int ktimval = 1;
    for(int i=0; i<nod; i++){
      ktimval = ktimval*lastnum;
      cout << "k times value  is " << ktimval << endl;
    }
    sum = sum + ktimval;

    cout << "sum : " << sum << endl; 
    n = n/10;
  }

  if(orgnum==sum){
    cout << "Armstrong number";
  }else{
    cout << "Not an Armstrong number";
  }

return 0;
}
