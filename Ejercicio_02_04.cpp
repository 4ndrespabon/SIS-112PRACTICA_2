// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 30/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 4
// Problema planteado: Un arreglo contiene las edades de un grupo de 50 personas con n�meros al azar,
// determine: el porcentaje de mayores (>=18 a�os) y menores de edad (<18 a�os)
// Las edades al azar deben ser generadas a partir de 1 a 110 a�os. 
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int arreglo[50];
    int num,mas18=0,menos18=0;
    for (int i=0; i<50; i++){
        arreglo[i]=1+rand()%(110+1-1);
        cout<<arreglo[i]<<endl;
        if (arreglo[i]>=18) {
            mas18+=1;
        } else {
            menos18+=1;
        }
    }
    cout<<"Porcentaje mayores de 18= "<<(mas18/50.0)*100<<"%"<<endl;
    cout<<"Porcentaje menores de 18= "<<(menos18/50.0)*100<<"%"<<endl;
    return 0;
}

