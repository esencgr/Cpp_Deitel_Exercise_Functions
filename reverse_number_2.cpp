#include <iostream>
#include <math.h>
using namespace std;

void reverse (int a){
    
        while (a > 0){
            
            cout << a % 10;
            a /= 10;
        }
        cout << endl;
}

int main(void){
    int number; 

    cout << " enter a number = ";
    cin >> number;
    cout << " reverse number = ";
    reverse (number);

    return 0;
}