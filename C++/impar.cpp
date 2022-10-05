#include<iostream>

using namespace std;

int main(int argc, char **argv){

    int dividendo,residuo;

    cout<< "\t\t UNITEC\n Programa que indica si un número es pas o impar\n ingresa un número: ";
    cin >> dividendo;
    

    residuo = dividendo%2;

    if(residuo == 1){
        cout<<"El número ingresado es impar";
    }else{
        cout<<"El número ingresado es par";
    }
    //printf("\nPrograma terminado con exito");
    return 0;
}