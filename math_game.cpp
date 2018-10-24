#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int rand_value(int);
int menu (void);
void arithmetic (void);
void correct_message (void);
void incorrect_message (void);

int main(){

        cout << "operation with which digit ."<<endl;
        cout << "1 -- for 1-10."<< endl;
        cout << "2 -- for 10-100."<< endl;
        cout << "3 -- for 100-1000. "<< endl;
        
        cout << "Choose type of problem to study."<< endl;
        cout << "1 -- for addition."<< endl;
        cout << "2 -- for substtaction."<< endl;
        cout << "3 -- for multiplication. "<< endl;
        cout << "4 -- for multiplication. "<< endl;
        cout << "5 -- for a combination of 1 through 4\n  "<< endl; 
      
    srand (time (NULL));  
    arithmetic();
    return 0;
}
int rand_value (int level){
    switch (level){
    case 1:
         return (1 + rand() % 10);
    case 2:
         return (1 + rand() % 100);    
    case 3:
         return (1 + rand() % 1000);
    default:
         return (1 + rand() % 10);
    }
}
int menu (void){
    int choise;
    do {
        cout << "your choise? = ";
        cin >> choise ;
    } while(choise < 1 || choise >5 );
    
    return choise;    
}
void arithmetic (void){
    
    int num1, num2, answer, selection ,response=0, correct=0, incorrect=0 ;
    int type , problem_mix;
    char op;
    
    int grade_level;
    cout << "enter grade level 1 to 3 = ";
    cin >> grade_level;
    
    for ( int i = 1; i <= 5; ++i){
        selection = menu();
        type = selection;
        num1 = rand_value (grade_level); 
        num2 = rand_value (grade_level);
        
        if (selection == 5){
                problem_mix = 1 + rand() % 4;
                type = problem_mix; 
        }
        switch (type){
            case 1:
                op = '+';
                answer = num1 + num2;
            break;
            case 2:
                op = '-';
                answer = num1 - num2;
            break;
            case 3:
                op = '*';
                answer = num1 * num2;
            break;
            case 4:
                op = '/';
                   answer = num1 / num2;
            break;
        }
        cout << num1 << " " << op << " " << num2 << " = ";
        cin >> response;
       
            while ( response != answer ){
                  incorrect_message();
                  incorrect++;
                  cin >> response ;
            }
            if (response == answer )
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
