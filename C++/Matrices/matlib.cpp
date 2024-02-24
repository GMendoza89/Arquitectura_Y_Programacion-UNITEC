#include"matlib.hpp"

matrixF32 makeMatrixF32(unsigned short int h, unsigned short int w){
    matrixF32 M;
    M.hight = h;
    M.width = w;

    M.data = new float[h*w];
    return M;
}
void deleteMatrixF32(matrixF32 *matrixA){
    if(matrixA->data != NULL){
        delete matrixA->data;
    }

}

void printMatrixF32(matrixF32 *matrixA){
    if(matrixA->data != NULL){
        for(int i = 0; i < matrixA->hight; i++){
            for(int j = 0; j < matrixA->width; j++){
                std::cout << matrixA->data[i*matrixA->width + j]<<" ";
            }
            std::cout<<"\n";
        }
    }
}

void saveMatrixF32(matrixF32 *matrixA, std::string fileName){
    std::ofstream outputFile;
    outputFile.open(fileName);
    outputFile << matrixA->hight <<" "<<matrixA->width <<"\n";
    if(matrixA->data != NULL){
        for(int i = 0; i < matrixA->hight; i++){
            for(int j = 0; j < matrixA->width; j++){
                outputFile << matrixA->data[i*matrixA->width + j]<<" ";
            }
            outputFile<<"\n";
        }
    }
    outputFile.close();

}
matrixF32 readMatrixF32(std::string fileName){
    std::ifstream inputFile;
    matrixF32 M;
    inputFile.open(fileName);
    inputFile >> M.hight;
    inputFile >> M.width;
     M.data = new float[M.hight*M.width];
     
    for(int i = 0; i < M.hight; i++){
        for(int j = 0; j < M.width; j++){
            inputFile >> M.data[i*M.width + j];
        }
    }
    inputFile.close();
    return M;
}

matrixF32 addMatrixF32(matrixF32 *matrixA, matrixF32 *matrixB){
    matrixF32 M;
    if(matrixA->hight != matrixB->hight || matrixA->width != matrixB->width){
        std::cout << "[-] Error - Matrices de diferentes dimensiones, verifique los datos \n\b";
        M.data = NULL;
        return M;
    }
    M.hight = matrixA->hight;
    M.width = matrixA->width;
    M.data = new float[M.hight*M.width];
    for(int i = 0; i < M.hight; i++){
        for(int j = 0; j < M.width; j++){
            M.data[i*M.width + j] = matrixA->data[i*M.width + j] + matrixB->data[i*M.width + j];
        }
    }
    std::cout << "[+] Suma de matrices completada \n\b";

    return M;
}