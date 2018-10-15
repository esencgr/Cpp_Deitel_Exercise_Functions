#include <iostream>
using namespace std;

int star1(int n, int i, int j){
    if (j == n+1)
        return -1;
    if (i == j || i+j == n+1)
        cout << "*";
    else 
        cout <<" ";
    star1(n, i, j+1);
    return 0;
}           

int star2(int n, int i){
    if (i == n+1)
        return -1;
    star1(n, i, 1);
    cout << endl;
    star2(n, i+1);
    return 0;
}
int main(){
    int n;
    cout << "enter shape size :" ;
    cin >> n;
    
    star2(n, 1);
    
    return 0;
}