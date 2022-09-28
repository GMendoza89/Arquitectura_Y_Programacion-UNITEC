#include<iostream>

using namespace std;

int main(int argc, char **argv){

    int edad;
    cout<<"Inngresa una edad: ";
    cin >> edad;
    if(edad > 18 && edad < 21){
        cout<<"Esta persona no puede votar, pero puedes comprar cosas";
    }else if(edad >= 21){
        cout<<"Esta persona puede votar";
    }else{
        cout<<"Esta persona no puede votar, y no puede comprar cosas";
    }

    return 0;
}