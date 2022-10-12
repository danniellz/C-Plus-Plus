#include <iostream>
#include <math.h>
using namespace std;

/*Area de un circulo pidiendo el radio*/

int main(){
    
    float PI = atan(1)*4;
    float radio;

    //Pedir radio
    cout << "Ingresa el radio del circulo" << endl;
    cin >> radio;

    //Resultado
    cout << "El área del circulo es " << PI*pow(radio, 2);

}