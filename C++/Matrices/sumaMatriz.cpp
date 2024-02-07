/*
    Programa Hola Mundo
    Autor: Ing. Gustavo David Mendoza Pinto
                UNITEC
    Arquitectura y Programación de Computadoras
        24 - 1
        Programa que suma dos matrices de 3 x 3
*/
#include<iostream>

int desplegarMenu();
void sumaMatrices3x3();

int main(int argc, char **argv){
    unsigned short int selection;
    while(true){
        selection = desplegarMenu();

        if(selection == 0){
            break;
        }
        switch (selection)
        {
        case 1:
            std::cout << "[+] has selecinado sumar dos matrices de 3 x 3 dimensiones\n";
            sumaMatrices3x3();
            break;
        case 2:
            std::cout << "[+] has selecionado crear una matris de valores aleatorios\n";
            break;
        case 3:
            std::cout << "[+] has selecinado restar dos matrices de 3 x 3\n";
            break;
        case 4:
            std::cout << "[+] has selecinado multiplicar dos matrices \n";
            break;
        default:
        std::cout << "[-] ERROR no selecionaste una opsion valida  \n";
            break;
        }

    }
    std::cout << "Estas Saliendo del programa buen día :)";
    return 0;
}
int desplegarMenu(){
    std:: cout << "\t \t \t Calculadora de Matrices\n";
    std:: cout << "\t \t Seleciona una operación: \n";
    std:: cout << "\t \t 1 -> Suma de dos matrices de 3x3:\n ";
    std:: cout << "\t \t 0 -> Salir \n";
    int Selector;
    std::cin >> Selector;
    return Selector;


}
void sumaMatrices3x3(){
    float matrizA[3][3];
    float matrizB[3][3];
    float matrizC[3][3];

    std::cout << "\t \t 1 -> Suma de dos matrices de 3x3:\n ";
    std::cout << "\t \t \t Ingresa los datos de la matriz A:\n ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout<< "Ingresa el valor A["<< i+1 <<","<<j+1<<"]";
            std::cin >> matrizA[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout<< matrizA[i][j]<<" " ;
        }
        std::cout<<"\n";
    }

}