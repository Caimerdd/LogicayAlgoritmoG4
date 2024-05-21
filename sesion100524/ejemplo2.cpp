/*Escribe un programa que pida al usuario ingresar números enteros positivos y
calcule la suma de todos los números ingresados hasta que el usuario ingrese un
número negativo*/

#include <iostream>
using namespace std;
int main()
{
    int num = 0, sum = 0;
    while (num >= 0)
    {
        sum += num;
        cout << "Dime un numero: ";
        cin >> num;
    }

    cout << "La suma es " << sum << endl;
}