#include <iostream>
using namespace std;

/*Realizar un programa que solicite al usuario pensar un numero entre 1 y 100, el programa debe generar un numero aleatorio en ese mismo rango e indicarle
si el numero que el programa ha pensado es mayor o menor que el que el usuario ha introducido hasta que el usario lo adivine, al final, mostrar el numero de intentos
que le ha lleavdo al usuario*/

int main()
{
    int num_rand = rand() % (1 - 100);
    int num_res;
    int intentos = 0;

    //While the introduced number is not the same as the random one, keep introducing a number
    while (num_res != num_rand)
    {
        cout << "Adivina el numero generado entre 1 y 100" << endl;
        cin >> num_res;

        if (num_res > num_rand)
        {
            cout << "El numero generado es menor" << endl;
            intentos++;
        }
        if (num_res < num_rand)
        {
            cout << "El numero generado es mayor" << endl;
            intentos++;
        }
        if (num_res == num_rand)
        {
            cout << "El numero introducido es correcto!" << endl;
            cout << "Numero: " << num_rand << " Intentos: " << intentos;
        }
    }

}