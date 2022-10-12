#include <iostream>
using namespace std;

/*Hacer un programa que simule un cajero automático, con saldo inicial de 1000 €. El
usuario podrá introducir saldo, sacar dinero o consultar el saldo de la cuenta.*/

int main()
{
    // Variables
    float saldo = 1000;
    int res;
    float saldo_accion;

    do
    {
        cout << "\n-----------------Que deseas realizar?----------------------\n";
        cout << "1- Introducir saldo\n";
        cout << "2- Sacar dinero\n";
        cout << "3- Consultar saldo\n";
        cout << "4- SALIR\n";
        cout << "------------------------------------------------------------\n";
        cin >> res;

        switch (res)
        {
        case 1:
            cout << "Introduce la cantidad de saldo a introducir: ";
            cin >> saldo_accion;
            saldo = saldo + saldo_accion;
            break;
        case 2:
            cout << "Introduce la cantidad de dinero a retirar: ";
            cin >> saldo_accion;

            while (saldo_accion > saldo || saldo_accion <= 0)
            {
                cout << "Introduce una cantidad valida a retirar: ";
                cin >> saldo_accion;
            }
            saldo = saldo - saldo_accion;
            break;
        case 3:
            cout << "Tu saldo actual es: " << saldo;
            break;
        case 4:
            return 0;
            break;

        default:
            cout << "Opcion no valida\n";
            break;
        }
    } while (res != 4);
}