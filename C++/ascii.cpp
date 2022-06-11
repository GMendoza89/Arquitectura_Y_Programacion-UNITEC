#include<iostream>

using namespace std;

int main(int argc, char **argv){

    char opsion;
    cout<< "Escribe una letra"<< endl;
    cin >> opsion;

    switch (opsion)
    {
    case 97:
        cout<< "Escribiste la letra a "<< endl;
        break;
    case 65:
        cout<< "Escribiste la letra A "<< endl;
        break;    
    default:
        cout << "Escribiste otra letra"<< endl;
        break;
    }
    

    return 0;
}