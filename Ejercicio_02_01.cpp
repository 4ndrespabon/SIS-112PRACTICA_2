// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 30/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 1
// Problema planteado: Almacenar un vector de tama�o N, con n�meros al azar entre A y B,
// e imprima la suma  de los componentes de �ndice par y la resta de los componentes de �ndice impar. 

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int n,a,b,num;
    int resta,suma;
    cout<<"Ingrese N: "<<endl;cin>>n;
    int arreglo[n];
    cout<<"Ingrese A: "<<endl;cin>>a;
    cout<<"Ingrese B: "<<endl;cin>>b;
    
    for (int i=0;i<n;i++){
        num=a+rand()%(b+1-a);
        arreglo[i]=num;
        cout<<num<<endl;
        if (num%2==0){
            suma += arreglo[i];
        } else {
            resta -= arreglo[i];
        }
    }
    
    cout<<"Suma= "<<suma<<endl;
    cout<<"Resta= "<<resta<<endl;
    return 0;
}
