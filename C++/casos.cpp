#include<iostream>

using namespace std;

int main(int argc, char **argv){ 
	char option;
    bool run = true;
    while (run)
    {
        cout<<"Ingrese una opsion\n";
        cout<<"\t opsion a-> \n";
        cout<<"\t opsion b-> \n";
        cout<<"\t opsion c-> \n";
        cout<<"\t opsion d-> \n";
        cout<<"\t opsion e-> \n";
        cout<<"\t opsion s->  Salir\n";
    cin >> option;

    switch (option)
    {
    
    case 'a':
        cout<<"Ingresaste la variable A"<< endl;
        break;
    case 'b':
        cout<<"Ingresaste la variable B"<< endl;
        break;
    case 'c':
        cout<<"Ingresaste la variable C"<< endl;
        break;
    case 'd':
        cout<<"Ingresaste la variable D"<< endl;
        break;
    case 'e':
        cout<<"Ingresaste la variable E"<< endl;
        break;
    case 's':
        cout<<"Seleccionaste salir, hasta pronto"<< endl;
        run = false;
        break;
    default:
        cout<<"Error no ingresaste una opsión valida"<< endl;
        break;
    }
    }
     

	return 0;
}