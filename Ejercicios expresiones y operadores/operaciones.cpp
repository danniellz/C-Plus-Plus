#include <iostream>
using namespace std;

/*Escribir un programa que realice las siguientes operaciones:
a. Op1: (a/b)+1
b. Op2: (a+b)/(c+d)
c. Op3: a+(b/(c-d))
El programa debe pedir al usuario los números y la operación a realizar.*/

int op1(float a, float b)
{
    double result = (a/b)+1;
    cout << "El resultado es " << result << endl;
    return 0;
}
int op2(float a, float b, float c, float d)
{
    double result = (a+b)/(c+d);
    cout << "El resultado es " << result << endl;
    return 0;
}
int op3(float a, float b, float c, float d)
{
    double result = a+(b/(c-d));
    cout << "El resultado es " << result << endl;
    return 0;
}

int main()
{
    //Variables
    int res = 0;
    float a, b, c, d;

    do
    {
        cout << "\nIntroduce el numero 'a'\n";
        cin >> a;
        cout << "\nIntroduce el numero 'b'\n";
        cin >> b;
        cout << "\nIntroduce el numero 'c'\n";
        cin >> c;
        cout << "\nIntroduce el numero 'd'\n";
        cin >> d;

        cout << "\n-----------------Que deseas realizar?----------------------\n";
        cout << "1- (a/b)+1\n";
        cout << "2- (a+b)/(c+d)\n";
        cout << "3- a+(b/(c-d))\n";
        cout << "4- SALIR\n";
        cout << "------------------------------------------------------------\n";
        cin >> res;

        switch (res)
        {
        case 1:
            op1(a, b);
            break;
        case 2:
            op2(a, b, c, d);
            break;
        case 3:
            op3(a, b, c, d);
            break;
        case 4:
            return 0;
            break;

        default:
            cout << "Opcion no valida\n";
            break;
        }
    } while (res != 5);
}