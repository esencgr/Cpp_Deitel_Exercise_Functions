#include <iostream>
#include <math.h>
using namespace std;

void solve_equation(float a, float b, float c) ;
int main(){
    
    int x, y, z;  
    cout << " equation coefficients (ax^2 + bx + c): ";
    cin >> x >>y >> z;
    solve_equation(x, y, z);
    return 0;
}

void solve_equation (float a, float b, float c) {
    
    float delta, x1, x2;
    delta = b * b - (4*a*c);
    
         if (delta < 0)
             cout << " There is no real root of the equation.";
         else if (delta == 0){
             x1 = -b / (2*a);
             cout << " x1 = x2 = " << (float) x1;
         }
         else {
             x1 = (-b - sqrt(delta)) / (2*a);
             x2 = (-b + sqrt(delta)) / (2*a);
             cout << " x1 = " << (float) x1 ;
             cout << " x2 = " << (float) x2 ;  
         }

}