// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 31/08/2023
// Fecha modificaci�n: 31/08/2023
// N�mero de ejericio: 22
// Problema planteado: Leer 2 vectores de dimensi�n N y calcule la multiplicaci�n de los mismos en otro vector. 

#include <iostream>

using namespace std;

int main()
{
    int tam;
    cout<<"Ingrese tama�o de los vectores: ";cin>>tam;
    int vector1[tam],vector2[tam],vector3[tam];
    for (int i=0;i<tam;i++){
        cout<<"Ingrese valor numero "<<i+1<<" para vector 1: ";cin>>vector1[i];
        cout<<"Ingrese valor numero "<<i+1<<" para vector 2: ";cin>>vector2[i];
        vector3[i]=vector1[i]*vector2[i];
    }
    for (int i=0;i<tam;i++){
        cout<<vector1[i]<<" * "<<vector2[i]<<" = "<<vector3[i]<<endl;
    }

    return 0;
}
