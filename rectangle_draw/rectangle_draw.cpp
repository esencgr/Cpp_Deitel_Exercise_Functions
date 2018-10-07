#include <iostream>
#include <math.h>
using namespace std;

void rectangle ( int line , int column){
    
      for ( int i=1;  i<=column;  i++ ){
            for (int j=1;  j<=line;  j++)
                cout << " * ";  
          cout << endl;
      }
          
          
}
int main(){
    int a , b ;
    cout << " enter the number of line  and column = "; 
    cin >> a >> b;
    rectangle (a,b);
    return 0;
}