// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 30/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 10
// Problema planteado: Dado un arreglo que contiene la poblaci�n de los nueve departamentos del pa�s 
// y otro que contiene los nombres de estos departamentos,
// indique el nombre del departamento que tiene la mayor poblaci�n y el nombre del departamento que tiene la menor poblaci�n. 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int mayor=0,menor=3000000000,imayor,imenor;
    int poblacion[]={626000,2883000,1972000,538000,887000,563000,3225000,468000,144000};
    string dep[]={"Chuquisaca","La Paz","Cochabamba","Oruro","Potosi","Tarija","Santa Cruz","Beni","Pando"};
    for (int i=0; i<9; i++){
        if (poblacion[i]>mayor){
            mayor=poblacion[i];
            imayor=i;
        }
        if (poblacion[i]<mayor){
            menor=poblacion[i];
            imenor=i;
        }
    }
    cout<<"Menor poblacion:\n"<<dep[imenor]<<":"<<poblacion[imenor]<<endl;
    cout<<"Mayor poblacion:\n"<<dep[imayor]<<":"<<poblacion[imayor]<<endl;
    return 0;
}
