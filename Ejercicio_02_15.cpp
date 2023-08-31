// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 31/08/2023
// Fecha modificación: 31/08/2023
// Número de ejericio: 15
// Problema planteado:  Realizar un programa que defina un vector de 10 enteros,
// a continuación lo inicialice con valores aleatorios (del 1 al 10) 
// y posteriormente muestre en pantalla cada elemento del vector junto con su cuadrado y su cubo. 
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;

int main()
{
    srand(time(NULL));
    int arreglo[10];
    for (int i=0;i<10;i++){
        arreglo[i]=1+rand()%(10-1+1);
        cout<<arreglo[i]<<"\t"<<pow(arreglo[i],2)<<"\t"<<pow(arreglo[i],3)<<endl;
    }

    return 0;
}
