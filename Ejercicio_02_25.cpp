// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 31/08/2023
// Fecha modificación: 31/08/2023
// Número de ejericio: 25
// Problema planteado:Genere un vector de N elementos y llénelos aleatoriamente entre valores de 1 a 100 e indique el mayor elemento,
// el menor elemento y el promedio. 

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    int tam,suma=0,mayor=0,menor=111;
    cout<<"Ingrese tamaño de los vectores: ";cin>>tam;
    char vector[tam];
    for (int i=0; i<tam; i++){
        vector[i]=1+rand()%(100+1-1);
        suma += vector[i];
        if (vector[i]>mayor){
            mayor=vector[i];
        }
        if (vector[i]<menor){
            menor=vector[i];
        }
    }
    cout<<"Mayor numero: "<<mayor<<endl;
    cout<<"Menor numero: "<<menor<<endl;
    cout<<"Promedio: "<<suma/(tam+0.0)<<endl;

    return 0;
}
