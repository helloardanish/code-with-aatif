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

  int i = 3;
  int num = 50;
  string name = "Aatif";
  string call = "cehck";

  int &refnum = num;

  string &refcall = call;

  call = "main";

  cout << "call : " << call << " and " << refcall << endl;

  num += 5;

  refnum += 10;

  cout << num << " and " << refnum << endl;

  // user of reference

  int z = 5;

  int ans = addTen(z); // create a copy
  // pass by value

  cout << "adding 10 in 5 is " << ans << endl;

  cout << "value of z is  " << z << endl;

  int m = 5;

  int ans2 = refAddTen(m); // no copy
  // pass by reference

  cout << "adding 10 in 5 is " << ans2 << endl;

  cout << "value of m is  " << m << endl;

  return 0;
}
