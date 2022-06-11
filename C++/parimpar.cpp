#include<iostream>

using namespace std;

int main(int argc, char **argv){ 
	int n, r;
    cout << "Ingresa un número"<<endl;
    cin >> n;
    r = n%2;                                         // guardamos residuo de la division del numero n entre 2
    if(!r){                                         // Verificamos si el número ingresado es par 
        cout<<"El número ingresado es par"<<endl;
    }else{
        cout<<"El número ingresado es impar"<<endl;
    }

	return 0;
}