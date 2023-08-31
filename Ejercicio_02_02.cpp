// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 2
// Problema planteado: Escribir un programa que a partir de un arreglo constante de 10 elementos enteros,
// determine el porcentaje de números pares positivos e impares negativos. 

#include <iostream>

using namespace std;

int main()
{
    int tam=10, par, impar;
    int arreglo[tam];
    for (int i=0; i<tam;i++){
        int num=0;
        cout<<"Ingrese numero: ";
        cin>>num;
        if (num%2==0){
            par +=1;
        } else if (num%2!=0) {
            impar +=1;
        }
    }
    cout<<"Porcentaje de pares= "<<(par/10.0)*100<<endl;
    cout<<"Porcentaje de impares= "<<(impar/10.0)*100<<endl;
    return 0;
}
