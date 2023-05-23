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

  if (resultSum == orgnum) {
    return true;
  }
  return false;
}

int main() {

  int numlst[] = {10,125,153,370,371,407,1634,124,8208};

  int lenofnumlst = sizeof(numlst)/sizeof(int);
  for(int i=0; i<lenofnumlst; i++){
    int num = numlst[i];

    bool result = checkArmstrong(num);

    if (result) {
      cout << num << " is Armstrong number";
    } else {
      cout << num << " is not an Armstrong number";
    }
    cout << "\n\n";
  }

  return 0;
}

/*

10 is not an Armstrong number

125 is not an Armstrong number

153 is Armstrong number

370 is Armstrong number

371 is Armstrong number

407 is Armstrong number

1634 is Armstrong number

124 is not an Armstrong number

8208 is Armstrong number

*/
