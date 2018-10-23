#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void product_game (void);
int main(){
    srand (time (NULL));
    product_game ();
    return 0;
}
void product_game (void){
    int num1, temp, num2, response = 0;
    cout << "enter -1 to end " << endl;
    while (response != -1){
        num1 = rand() % 10; 
        num2 = rand() % 10;
        cout << num1 << " * " << num2 << " = " ;
        cin >> response;
        while (response != -1 && response != num1 * num2){
            cout << " try again " << endl;
            cin >> response ;
        }
        temp = num1 * num2;
        if (response == temp )
            cout << "great" << endl ;
            
    }
  
}