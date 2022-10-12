#include <iostream>
#include <math.h>
using namespace std;

/*Dada la hipotenusa y el angulo de un triangulo rectangulo por el usuario, sacar las medidas del triangulo*/

int main(){
    
    float hip, ang, c1, c2;

    cout << "Ingresa la hipotenusa del triangulo" << endl;
    cin >> hip;
    
    cout << "Ingresa el angulo del triangulo" << endl;
    cin >> ang;

    c1 = sin(ang) * hip;
    c2 = cos(ang) * hip;

    cout << "las medidas del triangulo para el cateto 1 es " << c1 << " y para el cateto 2 " << c2 << endl;

}