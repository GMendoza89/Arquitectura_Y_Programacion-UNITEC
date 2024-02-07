#include<iostream>
#include<fstream>

int main(int argc, char **argv){

    long int elementoN;
    long int elementoN_n;
    long int elementoN_1 = 1;
    long int elementoN_2 = 0;
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

    outputFile.open("fibonacci_longint.csv");

    if(elementoN == 1){
        std::cout << "El valor del elemento 1 de la serie correponde a: 0 \n";
        outputFile << elementoN_2 << "\n";
        outputFile.close();
        return 0;

    }else if(elementoN == 2){
        std::cout << "El valor del elemento 2 de la serie correponde a: 1 \n";
        outputFile << elementoN_2 << "\n";
        outputFile << elementoN_1 << "\n";
        outputFile.close();
        return 0;
    }

    std::cout << elementoN_2 << " \n";
    std::cout << elementoN_1 << " \n";
    outputFile << elementoN_2 << "\n";
    outputFile << elementoN_1 << "\n";

    for( int i = 0; i < elementoN; i++){
        elementoN_n = elementoN_1 + elementoN_2;
        elementoN_2 = elementoN_1;
        elementoN_1 = elementoN_n;
        std::cout << elementoN_n << " \n";
        outputFile << elementoN_n << "\n";
    }

    std::cout << "El valor del elemento "<< elementoN << " de la serie correponde a:"<< elementoN_n << "\n";
    
    outputFile.close();
    return 0;
}