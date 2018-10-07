#include <iostream>
using namespace std;

void odd_even(int number){
    
    if (number % 2 == 0)
        cout << " the number is even " << endl;
    else 
        cout << " the number is odd " << endl;
        
}

int main(){
    int num;
    cout << " enter the number = " ;
    cin >> num;
    odd_even ( num ); 
 }
