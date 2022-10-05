#include<iostream>

using namespace std;

int main(int argc, char ** argv){
    int edad = 18;

     while(edad < 18){
        edad++;
        if(edad == 1){
            cout<<"Fecilicdades Cumpliste " << edad << " Año \n";    
        }else{
            cout<<"Fecilicdades Cumpliste " << edad << " Años \n";
        }
    }
    do{
        edad++;
        if(edad == 1){
            cout<<"Fecilicdades Cumpliste " << edad << " Año \n";    
        }else{
            cout<<"Fecilicdades Cumpliste " << edad << " Años \n";
        }
    }while(edad < 18);
    cout<<"Felicidades eres mayor de edad\n";
    
    return 0;
}