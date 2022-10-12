#include <iostream>
using namespace std;

/*Hacer un programa que dados 2 numeros yla operacion que desee el usuario, multiplque, divida, sume o reste ambos numerosrealizar con diferentes funciones)*/

int multiplicar(double num1, double num2)
{
    double result = num1 * num2;
    cout << "La multiplicacion es " << result << endl;
    return 0;
}
int dividir(double num1, double num2)
{
    double result = num1 / num2;
    cout << "La divison es " << result << endl;
    return 0;
}
int sumar(double num1, double num2)
{
    double result = num1 + num2;
    cout << "La suma es " << result << endl;
    return 0;
}
int restar(double num1, double num2)
{
    double result = num1 - num2;
    cout << "La resta es " << result << endl;
    return 0;
}

int main()
{
    int res = 0;
    double num1, num2;

    do
    {
        cout << "\nIntroduce el primer numero\n";
        cin >> num1;
        cout << "\nIntroduce el segundo numero\n";
        cin >> num2;

        cout << "\n-----------------Que deseas realizar?----------------------\n";
        cout << "1- Sumar\n";
        cout << "2- Restar\n";
        cout << "3- Multiplicar\n";
        cout << "4- Dividir\n";
        cout << "5- SALIR\n";
        cout << "------------------------------------------------------------\n";
        cin >> res;

        switch (res)
        {
        case 1:
            sumar(num1, num2);
            break;
        case 2:
            restar(num1, num2);
            break;
        case 3:
            multiplicar(num1, num2);
            break;
        case 4:
            dividir(num1, num2);
            break;
        case 5:
            return 0;
            break;

        default:
            cout << "Opcion no valida\n";
            break;
        }
    } while (res != 5);
}