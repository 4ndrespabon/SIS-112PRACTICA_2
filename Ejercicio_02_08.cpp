// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 30/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 8
// Problema planteado: Se tiene el arreglo  Ventas: 0 1 2  10 11 vene vfeb vmar .  . vnov vdic Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que contiene los nombres de los meses: Meses: 0 1 2  10 11 �Ene� �Feb� �Mar� .  . �Nov� �Dic� Escriba un programa que obtenga: � �En qu� mes(es) se dieron las ventas m�ximas de la empresa? �  �A cu�nto ascendieron las ventas m�ximas? � �Cu�l fue el total de las ventas? Las ventas deben ser ingresadas por teclado. 

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
