// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 8
// Problema planteado: Se tiene el arreglo  Ventas: 0 1 2  10 11 vene vfeb vmar .  . vnov vdic Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que contiene los nombres de los meses: Meses: 0 1 2  10 11 “Ene” “Feb” “Mar” .  . “Nov” “Dic” Escriba un programa que obtenga: • ¿En qué mes(es) se dieron las ventas máximas de la empresa? •  ¿A cuánto ascendieron las ventas máximas? • ¿Cuál fue el total de las ventas? Las ventas deben ser ingresadas por teclado. 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ventas[11],vmax=0,sumatotal=0,indice,tam;
    string meses[]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    tam= sizeof(meses)/ sizeof(meses[0]);
    for (int i=0;i<tam;i++){
        cout<<"Ingrese ventas en el mes de "<<meses[i]<<endl;
        cin>>ventas[i];
        if (ventas[i]>vmax){
            vmax=ventas[i];
            indice=i;
        }
        sumatotal += ventas[i];
    }
    cout<<"Mes de ventas maximas: "<<meses[indice]<<endl;
    cout<<"Las ventas maximas ascendieron a: "<<ventas[indice]<<endl;
    cout<<"Total de ventas: "<<sumatotal<<endl;

    return 0;
}
