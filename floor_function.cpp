#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double x;
    int y;
    
    cout << "enter x(double)(exit -1) = " ; 
    cin >> x;
    
    while (x != -1){
        y = floor(x + 0.5);
        cout << "y (use floor for x -> y) = " << y << endl;  
        cout << "enter x (double) (exit -1) = "; 
        cin >> x;
    }
    return 0;
}