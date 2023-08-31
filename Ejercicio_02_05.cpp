// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 30/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 5
// Problema planteado: Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a 240),
// determinar la mayor estatura, la estatura m�s baja y el promedio de estaturas. 

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int n,est,estmayor=0,estmenor=241,suma=0;
    float contador=0;
    cout<<"Ingrese N: "<<endl;
    cin>>n;
    int estaturas[n];
    for (int i=0;i<n;i++){
        estaturas[i]=50+rand()%(240+1-50);
        cout<<estaturas[i]<<endl;
        suma += estaturas[i];
        if (estaturas[i]>estmayor){
            estmayor=estaturas[i];
        }
        if (estaturas[i]<estmenor){
            estmenor=estaturas[i];
        }
        contador+=1;
    }
    cout<<"Estatura mas baja: "<<estmenor<<" cm"<<endl;
    cout<<"Estatura mas alta: "<<estmayor<<" cm"<<endl;
    cout<<"Promedio: "<<suma/contador<<" cm"<<endl;
    
    return 0;
}

