#include <iostream>
using namespace std;

/*Escribir un programa que identifique cuántas mayúsculas y minúsculas hay en un conjunto de caracteres.*/

int main()
{
    //Variables
    int mayus = 0;
    int minus = 0;
    string palabra;

    cout << "Introduce una palabra: ";
    cin >> palabra;

    for(int i = 0; i < palabra.length(); i++){
        if(isupper(palabra[i])){
            mayus++;

        }else{
            minus++;
        }
    }

    cout << "Hay " << mayus << " Mayusculas y " << minus << " Minusculas";

    
}