// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 30/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 13
// Problema planteado: Almacenar en un arreglo los n primeros n�meros primos. 

#include <iostream>

using namespace std;

int main()
{
    int num,i=2,contadorprimo=0;
    cout<<"Ingrese n: ";
    cin>>num;
    int primos[num];
    while (contadorprimo<num){
        int primo=0;
        for (int j=1;j<=i;j++){
            if (i%j==0){
                primo +=1;
            }
        }
        if (primo==2){
            primos[contadorprimo]=i;
            contadorprimo +=1;
            cout<<i<<endl;
        }
        i = i + 1;
    }

    return 0;
}
