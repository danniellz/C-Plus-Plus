#include <iostream>
using namespace std;

/*Realizar un programa que calcule la descomposición en factores primos de un número
entero. Ejemplo 18=2*3*3*/

int main()
{
    // Variables
    int num, i = 2;

    // Number
    cout << "Introduce un numero: ";
    cin >> num;

    cout << num << " = ";

    while (num >= i)
    {
        //'i'is factor of num
        while (num % i == 0)
        {
            cout << i << " X ";
            num = num / i;
        }
        i++;
    }
}