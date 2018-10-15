#include <iostream>
using namespace std;

void square (int,char);

int main(int argc, char **argv)
{
    int side;
    char fill_in;
    cout << " enter side and character: ";
    cin >> side >> fill_in ;  
    square (side,fill_in);
    
    return 0;
}

void square(int s , char into){
    for (int i=0; i<s; i++){
        for ( int j=0; j<s; j++)
            cout << "  " << into;
    cout << endl;
    }
}