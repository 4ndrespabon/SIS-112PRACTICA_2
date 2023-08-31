// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 12
// Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales,
// y otro contiene los nombres de estos minerales, para obtener: - Buscar por nombre de mineral y desplegar la producción 
// - Ordenar del mayor al menor (producción) y mostrar:      
// Mineral  Produccion ™           
// SN  998.000     
// SB  876.500     
// AU  786.670     
// PT  636.143     
// AG  135.567     
// CU  109.412 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    float prod[6]={998.000, 876.500, 786.670, 636.143, 135.567, 109.412};
    string mineral[6]={"SN","SB","AU","PT","AG","CU"};
    string palabra;
    int op=1;
    while (op!=0){
        cout<<"1.Buscar por nombre\n2.Ordenar de mayor a menor produccion\n0.Detener\n";cin>>op;
        if (op==1){
            cout<<"Ingrese mineral"<<endl;
            cin>>palabra;
            for (int i=0;i<6;i++){
                if (mineral[i]==palabra){
                    cout<<mineral[i]<<" "<<prod[i]<<endl;
                }
            }
        } else if (op==2){
            for (int j=0;j<6;j++){
                cout<<mineral[j]<<"\t"<<prod[j]<<endl;
            }
        }
    }
    
    return 0;
}
