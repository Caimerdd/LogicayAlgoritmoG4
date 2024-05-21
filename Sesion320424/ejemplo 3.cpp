/* Mostrar los numeros impares y pares desde x hasta y*/
#include <iostream>
using namespace std;


int main() {
    int x, y, i;

    cout << "Digite el primer digito"<< endl;
    cin >> x;
    cout << "Digite el segundo numero" <<  endl;
    cin >> y;

    cout << "Los numeros pares entre" << x << " y " << y << " son:\n";
    for (i = x; i <= y; i++) {
        if (i % 2 == 0) {
            cout << i << "\n";
        }
    }

    cout << "Los numero impares de " << x << " y " << y << " son:\n";
    for (i = x; i <= y; i++) {
        if (i % 2!= 0) {
            cout << i << "\n";
        }
    }

    return 0;
}