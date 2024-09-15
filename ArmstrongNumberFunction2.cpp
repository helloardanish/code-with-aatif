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
  int n, nt;
  cout << "Enter how many number you want to check: ";
  cin >> nt;

  for (int i = 0; i < nt; i++) {
    if (i == 0) {
      cout << "Enter your " << i + 1 << " st number: ";
    } else if (i == 1) {
      cout << "Enter your " << i + 1 << " nd number: ";
    } else if (i == 2) {
      cout << "Enter your " << i + 1 << " rd number: ";
    } else {
      cout << "Enter your " << i + 1 << " th number: ";
    }

    cin >> n;

    bool result = checkArmstrong(n);

    if (result) {
      cout << "Armstrong number";
    } else {
      cout << "Not an Armstrong number";
    }
    cout << "\n\n";
  }

  return 0;
}

/*

Enter how many number you want to check: 10
Enter your 1 st number: 370
Armstrong number

Enter your 2 nd number: 371
Armstrong number

Enter your 3 rd number: 407
Armstrong number

Enter your 4 th number: 1634
Armstrong number

Enter your 5 th number: 2551
Not an Armstrong number

Enter your 6 th number: 124
Not an Armstrong number

Enter your 7 th number: 54748
Armstrong number

Enter your 8 th number: 548834
Armstrong number

Enter your 9 th number: 8208
Armstrong number

Enter your 10 th number: 9800817
Armstrong number

*/
