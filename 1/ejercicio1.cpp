#include <iostream>
using namespace std;

/*Area de un rectangulo pidiendo al usuario la base y la altura*/

int main(){
    
    float base;
    float altura;

    cout << "Ingresa la base del rectángulo" << endl;
    cin >> base;

    cout << "Ingresa la altura del rectángulo" << endl;
    cin >> altura;

    cout << "El área del recángulo es " << (base*altura)/2;

}