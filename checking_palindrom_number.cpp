#include <iostream>
using namespace std;

  int revNum(int n){
      int org=0;
      while(n>0){
          int rem=n%10;
          org=org*10+rem;
          n=n/10;
      }
      return org;
  }
int main() {
  int n; 
  cout <<"Enter your number to check palindrom or not : ";
  cin >> n;
  
  int chk=revNum(n);
  
  if(chk==n){
      cout <<" Palindrom number "<<endl;
  }else{
      cout << "Not palindrom "<<endl;
  }
   
   
   
   
   
   
   
   
   
   
   
   
    return 0;
}
