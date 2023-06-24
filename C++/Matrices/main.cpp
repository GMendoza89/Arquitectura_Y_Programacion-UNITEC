#include<iostream>
#include"libMatrix.hpp"


int main(int argc, char** argv){

    matriz M1,M2;
    // unsigned int r;
    // unsigned int c;
    

    M1 = readMatriz("matriz_1.csv");
    makeMatriz(&M2,M1.rows,M1.cols);
    
    for(int i = 0; i<M1.rows; i++){
        for(int j = 0; j < M1.cols; j++){
            M2.data[i][j] = M1.data[i][j] + 20;
        }
    }
    printMatriz(&M1);
    printMatriz(&M2);

    //saveMatriz(&M1,"matriz_1.csv");
    saveMatriz(&M2,"matriz_2.csv");

    deleteMatriz(&M1);
    deleteMatriz(&M2);
    return 0;

}
