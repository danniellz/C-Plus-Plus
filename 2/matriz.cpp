#include <iostream>
using namespace std;

/*Realizar un programa que lea una matriz de 3x3 y cree su matriz traspuesta (la columna se convierte en fila y la fila en columna)*/

int main()
{
    int matriz[3][3]; 
    int traspuesta[3][3];

    for(int i = 0; i<3; i++){
        for(int j = 0; i<2; j++){
            cout << "Introduce la posicion: [" << i << "] [" << j << "]";
            cin >> matriz[i][j];
        }

    }

}