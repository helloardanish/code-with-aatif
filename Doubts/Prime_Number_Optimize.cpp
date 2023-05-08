#include <iostream>
#include <string>

using namespace std;
int main() {

// 5000


int max = 1000;

int count = 0;

  cout << 2 << endl; //initialized before
  for(int num=3; num<=max; num++){
    /*
    if(num==1){
      continue;
    }
    */
    
    /*
    if(num==2){
      cout << num << endl;
    }
    */

    if(num%2!=0){
      bool isPrime=true;
      for(int j=3; j<=num/2; j+=2){
        count++;
        if(num%j==0){
          //cout << "num value is " << num << endl;
          isPrime=false;
          break;
        }
      }
      if(isPrime==true){
        cout << num << endl;
      }
    } 
    
  }

cout << "program run >> " << count << " times." <<endl;
  return 0;
}



// for num = 100

// without break > 4851

// with break > 926

// with num/2 > 616

// with even condition > 567

// div by odd only > 278 times



// for num = 1000

// without break > 498501

// with break > 60099

// with num/2 > 40043

// with even conditon > 39544


// div by odd only > 19732 timess


/*

1,,2,32,4,2,t,24,t

i++; >> 
divstart=2
loop of num: 5
  if(num%divstart){
    divstart=2;
  }
  divstart++;

  
*/


