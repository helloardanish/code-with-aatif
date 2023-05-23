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

int sumTillPow(int n, int nod) {

  int resultSum = 0;

  while (n > 0) {
    int lastnum = n % 10;
    // sum = sum + pow(lastnum,nod);
    resultSum = resultSum + powNum(n, nod);
    // cout << "sum : " << resultSum << endl;
    n = n / 10;
  }
  return resultSum;
}

int main() {
  int n;
  cout << "Enter a number : ";
  cin >> n;
  
  int nod = noOfDigits(n);

  int result = sumTillPow(n, nod);

  if (result == n) {
    cout << "Armstrong number";
  } else {
    cout << "Not an Armstrong number";
  }

  return 0;
}
