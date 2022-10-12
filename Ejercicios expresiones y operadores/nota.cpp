#include <iostream>
using namespace std;

/*Escribir un programa que lea las notas de un alumno y calcule la nota final media de
dicho alumno. El alumno irá metiendo por pantalla las notas hasta escribir FIN.*/

int main()
{
    //Variables
    float nota, result;
    int cont = 0;
    string salir;

    while(true){
        cout << "Introduce la nota de una materia: ";
        cin >> nota;

        cont++;
        result = result+nota;

        cout << "Si no desea continuar introduza fin/FIN: ";
        cin >> salir;

        if(salir == "FIN" || salir == "fin"){
            break;
        }
    }

    cout << "La nota media es: " << result/cont;
    
}