#include <iostream>
#include <math.h>
using namespace std;

int reverse(int number){
    int temp;
    int result = 0;
        while (number > 0){
            temp = number % 10;
            result = result * 10 + temp;
            number /= 10; 
        }
    return result;
}

int main(){
    int number;
    cout << " enter a number = ";
    cin >> number;
    reverse (number);
    return 0;
}