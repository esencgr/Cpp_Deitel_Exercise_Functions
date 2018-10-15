#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

void square_draw (int, char);
void x_draw (int, char);
void circle_draw (double, char);
void triangle_draw (int,char);

int main(int argc, char **argv)
{
    int side;
    char fill_in;
    
    cout << " enter side and character: ";
    cin >> side >> fill_in ; 
    square_draw (side,fill_in);
    
    cout << " enter r and character: ";
    cin >> side >> fill_in ; 
    circle_draw (side,fill_in);
    
    cout << " enter side and character: ";
    cin >> side >> fill_in ; 
    x_draw (side,fill_in);
    
    cout << " enter side and character: ";
    cin >> side >> fill_in ; 
    triangle_draw (side,fill_in);
    
    return 0;
}

void square_draw(int s , char into){
    for (int i=0; i<s; i++){
        for ( int j=0; j<s; j++)
            cout << "  " << into;
    cout << endl;
    }
}
void x_draw (int s , char into){
    for (int i=1; i<=s; i++){
        for ( int j=1; j<=s; j++){
            if (i + j == s+1 || i==j)
            cout << into;
            else 
            cout << " " ;    
        }
    cout << endl;
    }
}
void circle_draw (double r, char into){
    double x = r + 2; 
    double y = r + 2;
    for (int i=1;   i<2*x;  i++){
        for ( int j=1;  j<2*x;  j++){
            if ( pow(x-i,2) + pow(y-j,2) >= pow(r,2)) 
            // dışı dolu kare // <= kullanılsa içi dolu kare // == ise içi boş kare
            cout << into;
            else 
            cout << " " ;    
        }
    cout << endl;
    }
}
void triangle_draw (int s , char into){
    for (int i=0; i<=s; i++){
        for ( int j=1; j<=i; j++){
            cout << into ;
        }
    cout << endl;
    }
}
