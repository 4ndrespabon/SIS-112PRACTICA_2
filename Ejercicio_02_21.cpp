// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 31/08/2023
// Fecha modificación: 31/08/2023
// Número de ejericio: 21
// Problema planteado: Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada uno,
// pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2

#include <iostream>

using namespace std;

int main()
{
    int vector1[5],vector2[5],vector3[5];
    for (int i=0;i<5;i++){
        cout<<"Ingrese valor numero "<<i+1<<" para vector 1: ";cin>>vector1[i];
        cout<<"Ingrese valor numero "<<i+1<<" para vector 2: ";cin>>vector2[i];
        vector3[i]=vector1[i]+vector2[i];
    }
    for (int i=0;i<5;i++){
        cout<<vector1[i]<<" + "<<vector2[i]<<" = "<<vector3[i]<<endl;
    }

    return 0;
}
