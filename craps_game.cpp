#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

//  The player throws two dice in the same time. when the dice is stop , numbers of on the dice is collected.
//  If the sum is 7 or 11 at first throw, player is win. If the sum is 2,3 ,12 at first throw, player is lose.
//  If the sum is 4,5,6,8,9,10 at first throw,  this sum is become the player score.
//  Until the player find the player score , continue to throw the dice.
//  While continue to the dice throw , if the dice sum become 7 player is losee ..

int dice_throw(void){
    int sum,d1,d2;
    d1 = 1 + (rand() % 6);
    d2 = 1 + (rand() % 6);
    sum = d1 + d2;
    cout << " player  " << d1 << "  and  " << d2 << " = " ;
    cout << sum << "  scored  " << endl;
    return sum;
}

int main(){
        int total,game, player_score;
        
        srand(time (NULL));
        total = dice_throw();
        switch (total){
            case 7: case 11:
            game = 1;
            break;
            
            case 2: case 3: case 12:
            game = 2;
            break ;
            
            default:
            game = 0;
            player_score = total; 
            cout << " the player win at " << total << endl;
 
        }
        while (game == 0 ){
             total = dice_throw();
             
                if (total == player_score)
                    game = 1;
                else if ( total == 7)
                    game = 2;
        }
          
        if ( game == 1)
            cout << "  player win the game " << endl;
        else  
            cout << "  player lose the game " << endl;
 
return 0;
}

