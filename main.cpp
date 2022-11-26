#include <iostream>
using namespace std;
void fibonacci (int n) {
    if (n >= 2) {
        cout << "1" << endl;
        cout << "1" << endl;
        int risultato = 1, a, b = 1;
        while (n >= risultato) {
            a = risultato;
            risultato = a + b;
            b = a;
        }
        a=risultato-b;
        risultato -= a;
        b=1;
        int x = 1;
        while (x<risultato){
            a = x;
            x = a + b;
            b = a;
        cout << x << endl;
        }

    }else if (n == 1) {
        cout << "1" << endl;
        }
    }


int main() {
    int n =0;
    cin >> n;
    fibonacci(n);

    return 0;
}
