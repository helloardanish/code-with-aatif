// references

#include <iostream>
#include <string>

using namespace std;

int addTen(int i) {
  i += 10;
  return i;
}

int refAddTen(int &i) {
  i += 10;
  return i;
}

int main() {

  int num = 50;
  string call = "cehck";

  // int &refnum = num;
  // string &refcall = call;

  int *numPointer = &num; // pointer

  // num is value pointing to address of num
  // address of num is created when num variable initialized

  cout << "value of num is " << *numPointer << endl;

  cout << "address of num is " << numPointer << endl;

  cout << "value of num is " << num << endl;

  cout << "address of num is " << &num << endl;

  // numPointer += 10; > changing address
  // create a new address

  *numPointer += 10; // changing value from the address

  cout << "value of num is " << *numPointer << endl;

  cout << "address of num is " << numPointer << endl;

  cout << "value of num is " << num << endl;

  cout << "address of num is " << &num << endl;

  return 0;
}
