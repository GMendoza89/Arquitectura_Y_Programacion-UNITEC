#include<iostream>
#include<fstream>

int main(int argc, char **argv){

    long int elementoN;
    
    std::ofstream outputFile;
    if(argc < 2){
         std::cout << "[-] ERROR  01 - Falta el numero de elementos a usar, ejemplo: \n";
         std::cout<<"\t\t " << argv[0] << " [Numero_de_Elementos]\n";
        return -1;

    }
    elementoN = atoi(argv[1]);
    // std::cout << argc << " \n";
    // std::cout << "Ingrese el valor de la serie de Fibonacci a calcular: ";
    // std::cin >> elementoN;

    if(elementoN < 1){
        std::cout << "[-] ERROR  02 - Debes de Ingresar un valor mayor o igual a 1 \n";
        return -2;
    }

    outputFile.open("fibonacci_unignedlongInt.csv");

    if(elementoN == 1){
        // std::cout << "El valor del elemento 1 de la serie correponde a: 0 \n";
        outputFile << "0" << "\n";
        outputFile.close();
        return 0;

    }else if(elementoN == 2){
        // std::cout << "El valor del elemento 2 de la serie correponde a: 1 \n";
        outputFile << "0" << "\n";
        outputFile << "1" << "\n";
        outputFile.close();
        return 0;
    }
    unsigned long int serieFibonacci[elementoN];
    serieFibonacci[0] = 0;
    serieFibonacci[1] = 1;

    // std::cout << serieFibonacci[0] << " \n";
    // std::cout << serieFibonacci[1] << " \n";
    outputFile << serieFibonacci[0] << "\n";
    outputFile << serieFibonacci[1] << "\n";

    for( int index = 2; index < elementoN; index++){
       serieFibonacci[index] = serieFibonacci[index - 1] + serieFibonacci[index -2];
        outputFile << serieFibonacci[index] << "\n";
    }
    
    int index;
    while(true){

        std::cout << "Indica el valor de la serie a visualizar:   (presiona 0 para salir) ";
        std::cin >> index;
        if(index == 0){
            break;
        }
        if(index >elementoN ){
            std::cout << " ERROR [-] Ingresa un valor que este dentro del limite calculado \n";
            continue;
        }
        std::cout << " El elemento de la serie " << index << " Corresponde al valor de: " << serieFibonacci[index - 1]<< "\n";

    }
    
    outputFile.close();
    return 0;
}