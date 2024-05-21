/* Escribe un programa que solicite al usuario ingresar 5 números enteros, los
almacene en un arreglo y luego los ordene en forma ascendente utilizando el
algoritmo de ordenamiento de burbuja.*/

#include <iostream>
using namespace std;

int main() {
    const int TAMANO = 5;
    int numeros[TAMANO];

    cout << "Ingresa " << TAMANO << " numeros enteros:" << endl;
    for (int i = 0; i < TAMANO; ++i) {
        cin >> numeros[i];
    }

    bool intercambio;
    do {
        intercambio = false;
        for (int i = 0; i < TAMANO - 1; ++i) {
            if (numeros[i] > numeros[i + 1]) {
                swap(numeros[i], numeros[i + 1]);
                intercambio = true;
            }
        }
    } while (intercambio);

    cout << "Numeros ordenados en forma ascendente:" << endl;
    for (int i = 0; i < TAMANO; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
