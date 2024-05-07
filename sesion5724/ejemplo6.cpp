/*Leer un numeor y dar la tabla de multiplicación de dicho numero*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Digite el numero" << endl;
    cin >> num;
    int i = 0;

    while (i <=12 )
    {
        int resul = i * num;
        cout << num <<" * " << i << " = " << resul << endl;
        i++;
    }
}
