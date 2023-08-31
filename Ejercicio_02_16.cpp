// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 31/08/2023
// Fecha modificación: 31/08/2023
// Número de ejericio: 16
// Problema planteado: Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector con datos leídos por el teclado.
// Copia los elementos del vector en otro vector pero en orden inverso, y muéstralo por la pantalla. 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string v1[5],v2[5];
    int inverso=4;
    for (int i=0 ; i<5 ; i++){
        cout<<"Ingrese caracter"<<endl;
        cin>>v1[i];
        v2[inverso]=v1[i];
        inverso -= 1;
    }
    for (int j=0 ; j<5 ; j++){
        cout<<v1[j];
    }
    cout<<endl;
    for (int j=0 ; j<5 ; j++){
        cout<<v2[j];
    } 
    return 0;
}
