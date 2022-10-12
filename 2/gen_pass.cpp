#include <iostream>
using namespace std;

/*Escribir una función que genere contraseñas de 8 caracteres, que tenga 2 caracteres que se encuentran en el nombre de usuario*/

int main(){
    string username, password;
    string abc = "abcdefghijklmnopqrstuvwxyz";

    cout << "---------------------------------------"; 
    cout << "\nNombre de usuario: "; 
    cin >> username;

    int n1 = rand() % username.size();
    int n2 = rand() % username.size();

    password.insert(password.end(), username[n1]);
    password.insert(password.end(), username[n2]);

    for (int i = 0; i <= 5; i++)
    {
        char n3 = abc[rand() % 26];
        password.insert(password.end(), n3);
    }
    
    cout << "\nTu contraseña es: " << password; 
    cout << "\n---------------------------------------";
    

}