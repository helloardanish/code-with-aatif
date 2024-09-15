#include <iostream>
#include <math.h>
using namespace std;

int powNum(int n, int p){
  int result = 1;

  for(int i=0; i<p; i++){
    result = result*n;
  }
  return result;
}

int main (){
int n,pow;

  cout << "Enter a number" << endl;
  cin >> n;

  cout << "Enter the power " << endl;
  cin >> pow;

  int ans  = powNum(n, pow);

  cout << "Power of " << n << " to the " << pow << " is " << ans << endl;
return 0;
}
