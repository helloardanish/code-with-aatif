#include <iostream>
using namespace std;

   
int main() {
int x;
int sum=0;
cout << "Enter how many number of average to calculate : ";
cin >> x;
cout <<"enter your all "<<  x <<" numbers : ";
for (int i=1; i<=x; i++){
    int y;
   
    cin >>y;
    sum+=y;
}
cout<<" Sum of your all "<<x<< " number is : " << sum <<endl;
int avgfinal=sum/x;

cout << "Average of your number is : " <<  avgfinal;





    return 0;
}
