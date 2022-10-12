#include <iostream>
#include <math.h>
using namespace std;

/*El usuario introduce 2 numeros, el segundo va restando al primero siempre que el resultado sea mayor que 0*/

int main(){
    
    float num1, num2;

    cout << "Ingresa el primer numero" << endl;
    cin >> num1;

    cout << "Ingresa el segundo numero" << endl;
    cin >> num2;

    for(num1; num1>0; num1 = num1-num2){
        cout << num1 << endl;
    }

    /*do{
        num1 = num1-num2;

        cout << num1 << endl;

    }
    while(num1>0);*/

}