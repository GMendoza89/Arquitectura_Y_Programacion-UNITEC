#include<iostream>
#include<fstream>

int main(int argc, char **argv){

    long int elementoN;
    long int elementoN_1 = 0;
    long int elementoN_2 = 0;
    long int numOfElements = 0;
    std::string fileName;

    bool collatzEnd = false; // Bandera que indica que la conjetura de Collatz se cumplio

    std::ofstream outputFile;

    if(argc < 2){
         std::cout << "[-] ERROR  01 - Falta el numero de elementos a usar, ejemplo: \n";
         std::cout<<"\t\t " << argv[0] << " [Inicio de la Serie]\n";
        return -1;

    }
    elementoN = atoi(argv[1]);
    

    if(elementoN < 1){
        std::cout << "[-] ERROR  02 - Debes de Ingresar un valor mayor o igual a 1 \n";
        return -2;
    }

    fileName = "Serie_Collatz_"  + std::to_string(elementoN) +  ".csv";
    outputFile.open(fileName);
    std::cout<<"[+] "<< elementoN << "\n";
    while(!collatzEnd){

        numOfElements++;
        elementoN_2 = elementoN_1;
        elementoN_1 = elementoN;
        if(elementoN % 2 == 0){
            elementoN /= 2;
        }else{
            elementoN = 3*elementoN + 1;
        }
        if(elementoN == 1 && elementoN_1 == 2 && elementoN_2 == 4 ){
            collatzEnd = true;
        }
        std::cout<<"[+] "<< elementoN << "\n";
        outputFile << elementoN << "\n";
    }
    std::cout<<"[+] El numero de elementos generado por la serie es: "<< numOfElements << "\n";
    outputFile.close();
    return 0;
}