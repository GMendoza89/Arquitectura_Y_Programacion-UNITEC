#include<iostream>

using namespace std;

int main(int argc, char **argv){

    string mensaje;
    int edad_persona_1;
    int edad_persona_2 = 0;

    mensaje = "UNITEC";

    cout << "\t\t Hola Mundo\n \t\t Bienvenidos \n Arquitectura y programacion de Computadoras \a \n" << mensaje;

    cout << "Ingresa la edad de la persona 1 "<<endl;
    cin >> edad_persona_1;
    cout << " Ingresa la edad de la persona 2 ";
    cin >> edad_persona_2;

    cout<<"Las edades ingrasadas son: " << edad_persona_1 << " y " <<edad_persona_2;
   
    return 0;
}