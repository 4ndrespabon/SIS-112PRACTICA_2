// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 31/08/2023
// Fecha modificación: 31/08/2023
// Número de ejericio: 17
// Problema planteado:Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno (comprendidas entre 0 y 100).
// A continuación, debe mostrar todas las notas, la nota media, la nota más alta que ha sacado y la menor. 

#include <iostream>

using namespace std;

int main()
{
    int menor=123,mayor=0,suma=0;
    int nota[5];
    for (int i=0 ; i<5 ; i++){
        cout<<"Ingrese la nota"<<endl;
        cin>>nota[i];
        if (nota[i]>mayor){
            mayor=nota[i];
        }
        if (nota[i]<menor){
            menor=nota[i];
        }
        suma += nota[i];
    }
    cout<<"Notas: "<<endl;
    for (int i=0;i<5;i++){
        cout<<nota[i]<<endl;
    }
    cout<<"Nota media: "<<suma/5.0<<endl;
    cout<<"Nota mas alta: "<<mayor<<endl;
    cout<<"Nota mas baja: "<<menor<<endl;
    return 0;
}
