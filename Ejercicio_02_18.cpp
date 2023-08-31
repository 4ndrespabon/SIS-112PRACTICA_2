// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 31/08/2023
// Fecha modificación: 31/08/2023
// Número de ejericio: 18
// Problema planteado: Programa que declare un vector de diez elementos enteros y pida números para rellenarlo 
// hasta que se llene el vector o se introduzca un número negativo. 
// Entonces se debe imprimir el vector (sólo los elementos introducidos). 

#include <iostream>

using namespace std;

int main()
{
    int arreglo[10];
    int indice = 0;
    int n = 0;
    int contador = 0;

    while (true) {
        if (contador < 10) {
            cout << "Ingrese el numero: ";
            cin >> n;
            if (n < 0) {
                break; 
            }
            arreglo[indice] = n;
            indice++;
            contador++;
        } else {
            break; 
        }
    }

    cout << "Elementos: " << endl;
    for (int i = 0; i < contador; i++) {
        cout << arreglo[i] << endl;
    }

    return 0;
}

