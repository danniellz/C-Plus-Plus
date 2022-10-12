#include <iostream>
using namespace std;

/*Escribir un programa que identifique si el número introducido es positivo o negativo*/

int main()
{
    //Variables
    int num;

    cout << "Introduce un numero: ";
    cin >> num;
    
    if(num < 0){
        cout << "El numero introducido es Negativo";
    }else{
        cout << "El numero introducido es Positivo";
    }

    
}