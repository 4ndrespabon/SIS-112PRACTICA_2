// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 7
// Problema planteado:  A partir de dos vectores constantes que contienen nombres de 7 personas cada uno.
// Escribir un programa que escriba la palabra “Iguales” si ambos vectores son iguales y “Diferentes” si no lo son.
// Serán iguales cuando en la misma posición de ambos vectores se tenga el mismo valor para todos los elementos. 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int iguales=0;
    string v1[7],v2[7];
    string nombre;
    for (int i=0 ;i<7; i++){
        cout<<"Ingrese nombre para vector 1: ";cin>>nombre;
        v1[i]=nombre;
        cout<<"Ingrese nombre para vector 2: ";cin>>nombre;
        v2[i]=nombre;
    }
    for (int j=0;j<7;j++){
        if (v1[j]==v2[j]){
            iguales +=1;
        }     
    }
    if (iguales==7){
        cout<<"Iguales"<<endl;
    } else {
        cout<<"Diferentes"<<endl;
    }
    
    return 0;
}
