
#include <iostream>
using namespace std;
int main() {
   int max = 15;
   for(int num=1; num<=max; num++){
       if(num==1){
           continue;
       }
       bool isPrime=true;
       for(int j=2; j<=max/2; j++){
           if(num==j){
               continue;
           }
           if(num%j==0){
               isPrime=false;
               break;
           }
       }
       if(isPrime==true){
           cout<<num <<endl;
       }
   }
    
    
    


    return 0;
}
