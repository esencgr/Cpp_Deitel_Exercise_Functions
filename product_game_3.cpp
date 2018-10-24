#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void product_game (void);
void correct_message (void);
void incorrect_message (void);
void performance (int, int, int);
int rand_value(int);

int main(){
    srand (time (NULL));
    product_game ();
    return 0;
}
int rand_value (int level){
    switch (level){
    case 1:
         return rand() % 10;
    case 2:
         return rand() % 100;    
    case 3:
         return rand() % 1000;
    default:
         return rand() % 10;
    }
}
void product_game (void){
    int num1, temp, num2, response=0, correct=0, incorrect=0 ;
    cout << "enter -1 to end " << endl;
    int grade_level;
    
    cout << "enter grade level 1 to 3 = ";
    cin >> grade_level;
    for ( int i = 1; i <= 5; ++i){
        num1 = rand_value (grade_level); 
        num2 = rand_value (grade_level);
        cout << num1 << " * " << num2 << " = " ;
        cin >> response;
        temp = num1 * num2;
        while (response != -1 && response != temp){
            incorrect_message();
            incorrect++;
            cin >> response ;
        }
        if (response == temp )
            correct++;
            correct_message();
            
    }   
        cout << " your percentage of success = " ;
        cout << ((double) ( correct ) / ( correct + incorrect )) << endl;
        
        if ((double ) ( correct ) / ( correct + incorrect ) < .75 )
            cout << "Please ask your instructor for extra help.\n";
    
    cout << "That's all for now. Bye." << endl; 
}

void correct_message (void){
     switch (rand () % 4){
         case 0 :
              cout << " Very good!" << endl;
              break;
         case 1 :
              cout << " Perfect!" << endl;
              break;
         case 2 :
              cout << " Nice work!" << endl;
              break;
         case 3 :
              cout << " Keep up the good work!" << endl;
              break;
     }
     cout << endl;
}

void incorrect_message (void){
     switch (rand () % 4){
         case 0 :
              cout << " No. Please try again." << endl;
              break;
         case 1 :
              cout << " Wrong. Try once more." << endl;
              break;
         case 2 :
              cout << " Don't give up!" << endl;
              break;
         case 3 :
              cout << " No. Keep trying." << endl;
              break;
     }
     cout << endl; 
}
