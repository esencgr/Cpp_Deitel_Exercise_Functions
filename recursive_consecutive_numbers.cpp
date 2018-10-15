#include <iostream>
#include <math.h>
using namespace std;
int consecutive (int);
int main(){
    int n;
    cout << "enter number :";
    cin >> n;
    consecutive(n);
    return 0;
}
int consecutive(int a){
    if (a>1)
        consecutive(a-1);
    cout << a << endl;
    return 0;
    
}
