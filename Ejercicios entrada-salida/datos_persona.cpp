#include <iostream>
using namespace std;

/*Realizar un programa que lea los siguientes datos de una persona: edad (dato tipo entero), sexo (tipo carácter) y altura en metros (tipo real). Tras leer los datos,
el programa debe mostrar todo en una misma oración.*/

int main()
{
    //Variables
    int age;
    char sex;
    float height;

    cout <<"Introduce la edad: ";
    cin >> age;

    while(age < 0){
        cout << "La edad no puede ser un numero negativo: ";
        cin >> age;
    }

     
    cout <<"Introduce el sexo: ";
    cin >> sex;

    while(!isalpha(sex)){
        cout << "El genero debe ser un caracter: ";
        cin >> sex;
    }

    cout << "Introduce la altura: ";
    cin >> height;

    while(height < 0){
        cout << "La altura no puede ser un numero negativo: ";
        cin >> height;
    }


    //Result
    printf("Edad: %i,  Genero: %c, Altura: %f ", age, toupper(sex), height);

}