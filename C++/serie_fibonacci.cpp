#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char** argv){
    int n,m;
    cout<<"\t\t Serie de Fibonacci\n Ingresa numero de elementos de la serie: ";
    cin>>n;

    unsigned long int F[n];

    F[0] = 0;
    F[1] = 1;
    //cout<<F[0]<<"\n"<<F[1];
    for(int i = 2; i<n;i++){
        F[i] = F[i-1]+F[i-2];
        //cout<<"\n"<<F[i];
    }

    ofstream file("fibanacci.txt");
    for(int i = 0; i<n;i++){
        file<<F[i]<<"\n"; 
    }
    file.close();

    

}