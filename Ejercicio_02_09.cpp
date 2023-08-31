// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 9
// Problema planteado:  Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, 
// otro arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
// Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el nombre del alumno que obtuvo la nota menor,
// además mostrar que carrera tuvo un desempeño mayor con relación al promedio   del curso. 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout<<"Numero de estudiantes: "<<endl;
    cin>>n;
    int calif[n], mayor= 0, menor=13418, indicemayor, indicemenor;
    float suma=0;
    string nombres[n],carrera[n];
    for (int i=0; i<n; i++){
        cout<<"Nombre del estudiante "<<i+1<<": "<<endl;cin>>nombres[i];
        cout<<"Calificacion del estudiante "<<i+1<<": "<<endl;cin>>calif[i];
        cout<<"Siglas de la carrera del estudiante "<<i+1<<": "<<endl;cin>>carrera[i];
        suma+=calif[i];
        if (calif[i]>mayor){
            mayor=calif[i];
            indicemayor=i;
        }
        if (calif[i]<menor){
            menor=calif[i];
            indicemenor=i;
        }
        
    }
    cout<<"Nota menor: "<<nombres[indicemenor]<<" = "<<calif[indicemenor]<<endl;
    cout<<"Nota mayor: "<<nombres[indicemayor]<<" = "<<calif[indicemayor]<<endl;
    cout<<"Promedio de curso: "<<suma/n<<"\nCarrera con mejor desempeño: "<<carrera[indicemayor]<<endl;
    return 0;
}
