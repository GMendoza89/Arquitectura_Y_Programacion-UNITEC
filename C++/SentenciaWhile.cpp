#include<iostream>

using namespace std;

int main(int argc, char ** argv){
    int edad = 0;

    while(true){
        edad++;
        if(edad == 1){
            cout<<"Fecilicdades Cumpliste " << edad << " Año \n";    
        }else{
            cout<<"Fecilicdades Cumpliste " << edad << " Años \n";
        }
        if(edad == 18){
            break;
        }
    }
    cout<<"Felicidades eres mayor de edad\n";
    
    return 0;
}