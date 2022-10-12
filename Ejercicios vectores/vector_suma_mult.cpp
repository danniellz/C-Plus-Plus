#include <iostream>
#include <vector>
using namespace std;

/*Escribir un programa que defina un vector de números y calcule: la suma y la
multiplicación de sus elementos.*/

int main()
{
    //Variables
    int suma = 0;
    int mult = 1;

    vector<int> numbers;
    numbers = {1,2,3,4,5};

    for(int i = 0; i < numbers.size(); i++){
        suma = suma+numbers[i];
        mult = mult*numbers[i];
    }

    cout << "La suma de todos los numeros en el vector es: " << suma << endl;
    cout << "La multiplicacion de todos los numeros en el vector es: " << mult << endl;

}