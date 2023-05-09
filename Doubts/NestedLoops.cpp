#include <iostream>
#include <string>





using namespace std;
int main() {




  // when two iteration is used then we have to use nested loop




  /*




  Single loop




    2 * 1 = 2
    2 * 2 = 4
    2 * 3 = 6
    .
    .
    .
    .
    2 * 10 = 20





    */




  /*
  int x;
  cin >> x;
  for(int i=1; i<=10; i++){
    cout << x << "*" << i << "=" << x * i << endl ;
  }
  */




  /*




  Two Loop




    1 + 2 = 3
    1 + 3 = 4
    1 + 4 = 5
    1 + 5 = 6
    .
    .
    .
    .
    .
    1 + 50 = 51




    2 + 2 = 4
    2 + 3 = 5
    .
    .
    .
    2 + 50 = 52




    3 + 2 = 5
    ....
    3 + 50 = 53





    */




  // two loops




  /*
  for (int i = 1; i <= 3; i++) {
    // i wll run j times
    for (int j = 2; j <= 3; j++) {
      cout << i << " + " << j << " = " << (i + j) << endl;
    }
  }
  */




  // three loop




  /*
    1 + 1 + 1 = 3
    1 + 1 + 2 + 4
    .....
    1 + 1 + 5 = 7




    1 + 2 + 1 = 4
    1 + 2 + 2 = 5
    ...
    1 + 2 + 5 = 8
    .
    .
    .
    .
    2 + 1 + 1 = 4
    2 + 1 + 2 = 5
    .
    .
    .
    .
    */




  int count = 0;




  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      for (int k = 1; k <= 5; k++) {
        count++;
        cout << i << " + " << j << " + " << k << " = " << (i + j + k) << endl;
      }
    }
  }




  cout << "Loop run " << count << " times." << endl;




  return 0;
}







[10:04 pm] A R DANISH




#include <iostream>
#include <string>





using namespace std;
int main() {




  // when two iteration is used then we have to use nested loop




  /*




  Single loop




    2 * 1 = 2
    2 * 2 = 4
    2 * 3 = 6
    .
    .
    .
    .
    2 * 10 = 20





    */




  /*
  int x;
  cin >> x;
  for(int i=1; i<=10; i++){
    cout << x << "*" << i << "=" << x * i << endl ;
  }
  */




  /*




  Two Loop




    1 + 2 = 3
    1 + 3 = 4
    1 + 4 = 5
    1 + 5 = 6
    .
    .
    .
    .
    .
    1 + 50 = 51




    2 + 2 = 4
    2 + 3 = 5
    .
    .
    .
    2 + 50 = 52




    3 + 2 = 5
    ....
    3 + 50 = 53





    */




  // two loops




  /*
  for (int i = 1; i <= 3; i++) {
    // i wll run j times
    for (int j = 2; j <= 3; j++) {
      cout << i << " + " << j << " = " << (i + j) << endl;
    }
  }
  */




  // three loop




  /*
    1 + 1 + 1 = 3
    1 + 1 + 2 + 4
    .....
    1 + 1 + 5 = 7




    1 + 2 + 1 = 4
    1 + 2 + 2 = 5
    ...
    1 + 2 + 5 = 8
    .
    .
    .
    .
    2 + 1 + 1 = 4
    2 + 1 + 2 = 5
    .
    .
    .
    .
    */




  int count = 0;




  for (int i = 1; i <= 5; i++) {
    // cout << " i = " << i << endl;
    for (int j = 1; j <= 5; j++) {
      //int n = 0;
      for (int k = 1; k <= 5; k++) {
        count++;
        cout << i << " + " << j << " + " << k << " = " << (i + j + k) << endl;
        //n++;
      }
      // cout << "j = " << j << " loop ended and run " << n << " times." <<
      // endl;
    }
  }




  // cout << "Loop run " << count << " times." << endl;




  return 0;
}


