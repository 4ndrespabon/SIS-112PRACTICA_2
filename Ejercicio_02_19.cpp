// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 31/08/2023
// Fecha modificaci�n: 31/08/2023
// N�mero de ejericio:  Hacer un programa que inicialice un vector de n�meros con valores aleatorios, 
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
    cout<<"Ingrese tama�o del vector: ";cin>>tam;
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
