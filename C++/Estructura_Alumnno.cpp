#include<iostream>
#include<fstream>

using namespace std;

struct _Alumno
{
    string NombrePila;
    string NombreSecudario;
    string ApellidoPaterno;
    string ApellidoMaterno;
    int NumeroEstudiante;
    float promedio;
};
typedef _Alumno Alumno;

Alumno nuevoAlumno();
void mostrarAlumno(Alumno A);


int main(int argc, char **argv){

    int NumeroAlumnos = 2;
    Alumno Lista[NumeroAlumnos];

    for(int i = 0; i< NumeroAlumnos; i++){
        Lista[i] =  nuevoAlumno();
        Lista[i].NumeroEstudiante = i+1;
        Lista[i].promedio = 0.0;
    }
    for(int i = 0; i< NumeroAlumnos; i++){
        mostrarAlumno(Lista[i]);
    }
    ofstream ListaAlumnos("Lista.txt");
    for(int i = 0; i< NumeroAlumnos; i++){
        ListaAlumnos<<" \n";
        ListaAlumnos<< Lista[i].NombrePila<<endl;
        ListaAlumnos<< Lista[i].NombreSecudario<<endl;
        ListaAlumnos<< Lista[i].ApellidoPaterno<<endl;
        ListaAlumnos<< Lista[i].ApellidoMaterno<<endl;
        ListaAlumnos<< Lista[i].NumeroEstudiante<<endl;
        ListaAlumnos<< Lista[i].promedio<<endl;
    }
    ListaAlumnos.close();

    return 0; 
}



Alumno nuevoAlumno(){

    Alumno alumno;
    cout<<"Nuevo Registro de Alumno\n";
    cout<<"Ingrese el Nombre: ";
    cin >> alumno.NombrePila;
    cout<<"Ingrese el Segundo Nombre: ";
    cin >>alumno.NombreSecudario;
    cout<<"Ingrese Apellido Paterno: ";
    cin >>alumno.ApellidoPaterno;
    cout<<"Ingrese el Apllido Materno: ";
    cin >>alumno.ApellidoMaterno;
    return alumno;
};

void mostrarAlumno(Alumno A){
    
    cout<<"Has registrado al Siguiente Alumno: \n";
    cout<<"\t Nombre: "<< A.NombrePila<<endl;
    cout<<"\t Segundo Nombre: "<< A.NombreSecudario<<endl;
    cout<<"\t Apellido Paterno: "<< A.ApellidoPaterno<<endl;
    cout<<"\t Apellido Materno: "<< A.ApellidoMaterno<<endl;
    cout<<"\t N. Estudiante: "<< A.NumeroEstudiante<<endl;
    cout<<"\t Promedio: "<< A.promedio<<endl; 

};