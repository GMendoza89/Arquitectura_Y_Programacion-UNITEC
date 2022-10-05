#include<iostream>

using namespace std;

int main(int argc, char **argv){


   for(int edad = 0; edad <= 18; edad++){
    if(edad == 0){
        cout<<"Felidades por haber nacido \n";
    }else if(edad == 1){
        cout << "Felicidades Cumpliste " << edad << " año\n";
    }else{
        cout << "Felicidades Cumpliste " << edad << " años\n";
    }
   }
   
    return 0;
}