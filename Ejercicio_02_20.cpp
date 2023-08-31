// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 31/08/2023
// Fecha modificación: 31/08/2023
// Número de ejericio: 20
// Problema planteado: Crea un programa que pida un número al usuario un número de mes 
// (por ejemplo, el 4) y diga cuántos días tiene (por ejemplo, 30) y el nombre del mes.
// Debes usar un vector. Para simplificarlo vamos a suponer que febrero tiene 28 días. 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string meses[13]={{" "},{"Enero tiene 31 dias"},{"Febrero tiene 28 dias"},{"Marzo tiene 31 dias"},{"Abril tiene 30 dias"},{"Mayo tiene 31 dias"},{"Junio tiene 30 dias"},{"Julio tiene 31 dias"},{"Agosto tiene 31 dias"},{"Septiembre tiene 30"},{"Octubre tiene 31 dias"},{"Noviembre tiene 30 dias"},{"Diciembre tiene 31 dias"}};
    int n;
    cout<<"Ingrese numero de mes: "<<endl;cin>>n;
    cout<<meses[n]<<endl;
    return 0;
}
