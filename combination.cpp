#include<iostream>
using namespace std;

int factoriel(int x){
    int carpim = 1;
    for (int i=x;  i>=1;  i--)
        carpim = carpim * i;
    return carpim;
}

int combination(int y, int r){
    return factoriel(y) / (factoriel(r) * factoriel(y-r));
}

int main(){
     int x;
     cout << " enter number = ";
     cin >> x;
     cout << x << "!= " << factoriel(x) << endl;
     int n,r;
     cout << " enter y and r = ";
     cin >> n >> r;
     cout << " c(n,r)= " << combination(n,r);
}
