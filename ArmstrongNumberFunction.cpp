#include <iostream>
#include <math.h>
using namespace std;

int noOfDigits(int num) {
  int count = 0;
  while (num > 0) {
    num = num / 10;
    count++;
  }
  return count;
}

int powNum(int n, int p) {
  int result = 1;

  for (int i = 0; i < p; i++) {
    result = result * n;
  }
  return result;
}

bool checkArmstrong(int n) {

  int nod = noOfDigits(n);
  int orgnum = n;
  int resultSum = 0;
  while (n > 0) {
    int lastnum = n % 10;
    resultSum = resultSum + powNum(lastnum, nod);
    n = n / 10;
  }
  
  if(resultSum==orgnum){
    return true;
  }
  return false;
}

int main() {
  int n;
  cout << "Enter a number : ";
  cin >> n;

  bool result = checkArmstrong(n);

  if (result) {
    cout << "Armstrong number";
  } else {
    cout << "Not an Armstrong number";
  }

  return 0;
}
