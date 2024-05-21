/*Escribe un programa que solicite al usuario ingresar la cantidad de calificaciones
que quiere promediar, luego ingrese esas calificaciones, las almacene en un
arreglo y calcule el promedio.*/

#include <iostream>
using namespace std;

main()
{
    int num;
    float sum = 0.0;
    float promedio;

    cout << " Ingrese el numero de notas";
    cin >> num;
    float notas[num];

    int i = 0;
    while (i < num)
    {
        cout << "Ingrese la nota " << i + 1 << ": " << endl;
        cin >> notas[i];
        sum += notas[i];
        
        i++;
    }
   
    promedio = sum/num;
    cout << "El promedio es " << promedio << endl;
    
}
