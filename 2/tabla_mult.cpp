#include <iostream>
using namespace std;

/*Realizar un programa que solicite un numero y muestre su respectiva tabla de multiplicar*/

int main()
{
    int num;

    cout << "Introduce un numero: ";
    cin >> num;

    cout << "Tabla del "<< num << endl;
    cout << "----------------------------\n";
    for(int i = 1; i <=10; i++){
        cout <<num <<"x" << i << " = " << num*i << endl;

    }
    cout << "----------------------------\n";

}