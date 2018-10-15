#include <iostream>
#include <math.h>
using namespace std;
int sum (int);
int main(){
    int n;
    cout << "enter number :";
    cin >> n;
    cout << "The sum of elements up to this number: "<< sum(n) << endl;
    return 0;
}
//recursive

int sum(int a){
  if(a==1)
    return 1;
  return a+ sum(a-1);
}