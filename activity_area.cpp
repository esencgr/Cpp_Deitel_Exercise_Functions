#include <iostream>
using namespace std;
// activity area of function.

void a (void);
void b (void);
void c (void);

int x = 1;  // global variable

int main(){

    int x = 5; // local variable of main
    cout << "main'in faaliyet alani disindaki yerel x degiskeni = " << x << endl;

    { // new activity area

        int x = 7 ;
        cout << "main'in faaliyet alani icindeki yerel x degiskeni = " << x << endl;

    } // end (new)

    cout << "main'in faaliyet alani disindaki yerel x degiskeni = " << x << endl;

    a();
    b();
    c();
    a();
    b();
    c();
    cout << "main icindeki yerel x = " << x << endl;
}

void a (void){
    int x = 25; // a her cagirildiginda ilk deger atanir.
    cout << "\na ya girdikten sonra yerel x degiskeni = " << x << endl;
    ++x;
    cout << "a ya cikmadan once yerel x degiskeni = " << x << endl;
}
void b (void){
    static int x = 50; // sadece statik ilk deger atanir.
                       // b nin ilk cagirilmasi.
    cout << "\nb ye girerken statik x degiskeni = " << x << endl;
    ++x;
    cout << "b ye cikmadan once statik x degiskeni = " << x << endl;
}
void c (void){

    cout << "\nc ye girdikten sonra global x degiskeni = " << x << endl;
    x *= 10;
    cout << "c ye cikmadan once global x degiskeni = " << x << endl;
}
