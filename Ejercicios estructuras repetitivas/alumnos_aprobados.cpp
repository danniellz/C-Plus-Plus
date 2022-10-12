#include <iostream>
using namespace std;

/*En una clase de 4 alumnos se han realizado 3 exámenes y se quiere determinar lo
siguiente:
a. Número de alumnos que aprobaron todos los exámenes.
b. Nº de alumnos que aprobaron al menos un examen.
c. Nº de alumnos que aprobaron el último examen*/

int main()
{
    // Variables
    float a1, a2, a3, b1, b2, b3, c1, c2, c3, d1, d2, d3;
    int all = 0, at_least_one = 0, last = 0;

    //Put grades
    cout << "Introduce 3 Notas para el alumno 1: " << endl;
    cin >> a1 >> a2 >> a3;
    cout << "Introduce 3 Notas para el alumno 2: " << endl;
    cin >> b1 >> b2 >> b3;
    cout << "Introduce 3 Notas para el alumno 3: " << endl;
    cin >> c1 >> c2 >> c3;
    cout << "Introduce 3 Notas para el alumno 4: " << endl;
    cin >> d1 >> d2 >> d3;
    cout << "---------------------------------------------------" << endl;

    //Result
    // a. Número de alumnos que aprobaron todos los exámene
    cout << "Alumnos que aprobaron todos los examenes: " << endl;

    if (a1 >= 5 && a2 >= 5 && a3 >= 5)
    {
        all++;
    }
    if (b1 >= 5 && b2 >= 5 && b3 >= 5)
    {
        all++;
    }
    if (c1 >= 5 && c2 >= 5 && c3 >= 5)
    {
        all++;
    }
    if (d1 >= 5 && d2 >= 5 && d3 >= 5)
    {
        all++;
    }

    cout << all << endl;
    ;

    // b. Nº de alumnos que aprobaron al menos un examen
    cout << "Alumnos que aprobaron al menos un examen: " << endl;

    if (a1 >= 5 || a2 >= 5 || a3 >= 5)
    {
        at_least_one++;
    }
    if (b1 >= 5 || b2 >= 5 || b3 >= 5)
    {
        at_least_one++;
    }
    if (c1 >= 5 || c2 >= 5 || c3 >= 5)
    {
        at_least_one++;
    }
    if (d1 >= 5 || d2 >= 5 || d3 >= 5)
    {
        at_least_one++;
    }

    cout << at_least_one << endl;
    ;

    // c. Nº de alumnos que aprobaron el último examen
    cout << "Alumnos que aprobaron el ultimo examen: " << endl;

    if (a3 >= 5)
    {
        last++;
    }
    if (b3 >= 5)
    {
        last++;
    }
    if (c3 >= 5)
    {
        last++;
    }
    if (d3 >= 5)
    {
        last++;
    }

    cout << last << endl;
}