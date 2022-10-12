#include <iostream>
using namespace std;

/*Escribir una función llamada strlen que devuelva el numero de ""a*s que lleva la cadena que introdice el usuario*/

int main(){
    string cadena;
    int a = 0;

    cout << "---------------------------------------"; 
    cout << "\nIntroduce la cadena: "; 
    cin >> cadena;

    for (int i = 0; i <= cadena.size(); i++)
    {
        if(cadena[i] == 'a'){
            a++;
        }
    }

    cout << "\nHay (" << a << ") 'a's en la cadena";
    cout << "\n---------------------------------------";
    

}