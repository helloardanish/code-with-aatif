/*
step to find out armstrong number >
1 : find number of digit. >>> done
2 : calculate pow of every digit.>>done
3 : sum of pow of every digit.>>done
4 : if sum is equal to original number then armstrong otherwise not armstrong.

  */
#include <iostream>
#include <math.h>
using namespace std;

int numOfDigit(int n){
  int count=0;
  while(n>0){
    n=n/10;
    count++;
  }
 return count;
}

int main() {
  int n;
cout << " Enter a number to check armstrong number  : ";
cin>>n;
  int orgNum=n;
 // cout << "number of digit " <<numOfDigit(n);
// int pownum;
  int sum =0;

  int nod =numOfDigit(n);
    while(n>0){
    int lastnum=n%10;
     // pownum=pow(lastnum,nod);
    n = n/10;
    //  sum+=pownum;
        sum+=pow(lastnum,nod);
    }
  if(sum==orgNum){
    cout << "Armstrong number "<<endl;
  }else{
    cout << "Not armstrong "<<endl;
  }






  
 return 0;
   }
