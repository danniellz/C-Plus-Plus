#include <iostream>
using namespace std;

/*Realizar un programa que lea un valor entero y determine si se trata de un número par o impar*/

int main()
{
    //Variables
    int num;

    cout << "Introduce un numero: ";
    cin >> num;
    
    if(num %2 == 0){
        cout << "El numero introducido es PAR";
    }else{
        cout << "El numero introducido es IMPAR";
    }

    
}