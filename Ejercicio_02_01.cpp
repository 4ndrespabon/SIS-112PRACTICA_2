// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 1
// Problema planteado: Almacenar un vector de tamaño N, con números al azar entre A y B,
// e imprima la suma  de los componentes de índice par y la resta de los componentes de índice impar. 

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
