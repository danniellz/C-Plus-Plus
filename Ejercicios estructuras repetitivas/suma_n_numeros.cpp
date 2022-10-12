#include <iostream>
using namespace std;

/*Escribir un programa que calcule el valor de la suma de todos los números desde el 1
hasta el introducido por el usuario (1+2+3+…+n).*/

int main()
{
    //Variables
    int num, suma = 0;

    cout << "Introduce un numero: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        suma = suma+i;
    }

    cout << "La suma de todos los numeros es "<< suma;

    
}