// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 3
// Problema planteado: Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el rango de A - B 
// y determine cuántos de estos elementos son números primos.  

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int arreglo[50];
    int num,a,b;
    cout<<"Ingrese A: "<<endl;cin>>a;
    cout<<"Ingrese B: "<<endl;cin>>b;
    for (int i=0;i<50;i++){
        int primo=0;
        arreglo[i]=a+rand()%(b+1-a);
        for (int j=1;j<=arreglo[i];j++){
            if (arreglo[i] % j==0){
                primo+=1;
            }
        }
        if (primo==2){
            cout<<arreglo[i]<<" es primo"<<endl;
        } else {
            cout<<arreglo[i]<<" no es primo"<<endl;
        }
    }

    return 0;
}

