#include <iostream>
using namespace std;
double fibonacci(int);
double fibonacci_2 (int);
int main(){
    
    int term;
    cout << "terim gir:";
    cin >> term;
    fibonacci (term);
    cout << "fibonacci(" << term << ") = " << (double)fibonacci_2(term) << endl;

}     
double fibonacci (int n){
    double a = 1.0;
    double b = 1.0;
    double c = 0.0;
           cout << (double)c << endl << (double)a  << endl << (double)b << endl;
           for (int i = 0; i <= n - 3; i++) {
               c = a + b;
               a = b;
               b = c;
               cout << (double)c << endl;
           }
           return 0;
}

double fibonacci_2(int n){
      double fib [100];
      fib [0] = 0.0;
      fib [1] = 1.0;
        
          for (int j = 2; j<=n; j++ )
              fib [j] = fib [j-1] + fib [j-2];
          
      return fib [n];
 }