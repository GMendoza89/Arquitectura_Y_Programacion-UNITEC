#include<iostream>

using namespace std;

int main(int argc, char **argv){ 
	// char cadena[20];
    
    // char caracter;
    // int index;
    // cout << "ingresa una cadena de texto: ";
    // cin >> cadena;
    
    // cout << "\n ingresa el indice de la cadena a visualizar: ";
    // cin >> index;
    
    // cout<<"\n En valor de la cadena es : "<< cadena[index]<<endl;
    // cout << "ingresa una caracter: ";
    // cin >> caracter;
    // cadena[index] = caracter;
    // cout<<"\n En valor de la cadena es : "<< cadena<<endl;

    // 
    int matriz[5][5];
    for(int i = 0; i<5;++i){
        for(int j = 0;j<5;++j){
            matriz[i][j] = i*5 + j;
        }
    }
    for(int i = 0; i<5;++i){
        for(int j = 0;j<5;++j){
            cout << matriz[i][j]<<", ";
        }
        cout<<endl;
    }
	return 0;
}