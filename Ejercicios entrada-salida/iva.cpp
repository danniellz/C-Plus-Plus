#include <iostream>
using namespace std;

/*Escribir un programa que del precio de un producto muestre en la salida el precio del producto al aplicarle el IVA.*/

int main()
{
    //Variables
    float price;

    printf("Introduce precio del producto: ");
    cin >> price;

    //Add iva to price
    price = price*1.21;

    //Result
    printf("Precio con IVA (21): %f", price);

}