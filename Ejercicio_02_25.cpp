// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 31/08/2023
// Fecha modificaci�n: 31/08/2023
// N�mero de ejericio: 25
// Problema planteado:Genere un vector de N elementos y ll�nelos aleatoriamente entre valores de 1 a 100 e indique el mayor elemento,
// el menor elemento y el promedio. 

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    int tam,suma=0,mayor=0,menor=111;
    cout<<"Ingrese tama�o de los vectores: ";cin>>tam;
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
