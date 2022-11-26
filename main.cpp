#include <iostream>
using namespace std;

void fibonacci (int n) {
    if (n == 2) {
        cout << "1" << endl;
        cout << "1" << endl;

    } else if (n == 1) {
        cout << "1" << endl;

    } else if(n>2){
        int risultato = 1, a , b = 1;
        while (n >= risultato) {
            a=risultato;
            risultato= a+b;
            b=a;
        }

        while (risultato>1){
            a = risultato-b;
            risultato -=a;
            b=a;
            cout << risultato << endl;

        }
        cout << "1" << endl;
    }
}
int main() {
    int n =0;
    cin >> n;
    fibonacci(n);

    return 0;
}
