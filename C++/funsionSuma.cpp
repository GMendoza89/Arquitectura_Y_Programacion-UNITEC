#include<iostream>

using namespace std;

void mensaje();
int sumaEnteros(int A, int B);

int main(int argc, char **argv){

    int NumeroA, NumeroB, NumeroC;

    mensaje();
    cout<<"Ingresa el valor de Variable A:";
    cin>>NumeroA;
    cout<<"Ingresa el valor de variable B:";
    cin>>NumeroB;
    NumeroC =  sumaEnteros(NumeroA,NumeroB);
    cout<<"El resultado de la suma es: "<<NumeroC;
   
    return 0;
}

void mensaje(){
    cout<< "Bienvenidos, este es un programa que suma dos variables\n";
};
int sumaEnteros(int A, int B){
    int C;
    C = A + B;
    return C;
};