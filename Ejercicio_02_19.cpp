// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 31/08/2023
// Fecha modificación: 31/08/2023
// Número de ejericio:  Hacer un programa que inicialice un vector de números con valores aleatorios, 
// y posterior ordene los elementos de menor a mayor. 
// Problema planteado: 19

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>

using namespace std;

int main()
{
    srand(time(NULL));
    int tam;
    cout<<"Ingrese tamaño del vector: ";cin>>tam;
    int vector[tam];
    for (int i=0; i<tam; i++){
        vector[i]=rand();
        cout<<vector[i]<<endl;
    }
    sort (vector, vector + tam);
    cout<<"De mayor a menor"<<endl;
    for (int i=0; i<tam; i++){
        cout<<vector[i]<<endl;
    }
    return 0;
}
