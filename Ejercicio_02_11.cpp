// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 11
// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1)
// y a partir de este arreglo determine la desviación típica. 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int edades[100];
    float media=0,partearriba=0;
    int n,i=0,suma=0;
    cout<<"Ingrese edad(-1 para detener): ";cin>>n;
    while (n!=-1){
        edades[i]=n;
        suma += n;
        cout<<"Ingrese edad(-1 para detener): ";cin>>n;
        i+=1;
    }
    media = suma/(i);
    cout<<"Num de personas: "<<i<<endl;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Media: "<<media<<endl;
    for (int j=0 ; j<i ; j=j+1){
        partearriba = partearriba + pow((edades[j]-media),2);
    }
    cout<<"Desviacion tipica: "<<sqrt(partearriba/(i))<<endl;
    return 0;
}
