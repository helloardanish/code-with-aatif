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

  cout << "address of refnum is " << &refnum << endl;
  cout << "address of call is " << &refcall << endl;

  num += 5;

  refnum += 10;

  cout << num << " and " << refnum << endl;

  // user of reference

  int currAgeOfSonu = 18;

  int ans = addTen(currAgeOfSonu); // create a copy
  // pass by value

  cout << "After 10 years Sonu will be " << ans << " years old." << endl;

  cout << "Sonu current age is  " << currAgeOfSonu << endl;

  int currAgeOfGulrez = 15;

  int ans2 = refAddTen(currAgeOfGulrez); // no copy
  // pass by reference

  cout << "After 10 years Gulrez will be " << ans2 << " years old." << endl;

  cout << "Gulrez current age is  " << currAgeOfGulrez << endl;

  return 0;
}
