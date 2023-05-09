#include <iostream>
#include <string>

using namespace std;
int main() {

// 5000


  int max = 100;

int count = 0;
  for(int num=1; num<=max; num++){
    if(num==1){
      continue;
    }
    bool isPrime=true;
    for(int j=2; j<=num/2; j++){
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

cout << "program run >> " << count << " times." <<endl;
  return 0;
}



// without break > 4851

// with break > 926

// with num/2 > 616



// without break > 498501

// with break > 60099

// with num/2 > 40043


// 


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


