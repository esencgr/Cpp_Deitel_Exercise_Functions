#include <iostream>
#include <math.h>
using namespace std;
int product (int);
int main(){
    int n;
    cout << "enter number :";
    cin >> n;
    cout << "The product of elements up to this number: "<< product(n) << endl;
    return 0;
}
//recursive

int product(int a){
  if(a==1)
    return 1;
  return a*product(a-1);
}