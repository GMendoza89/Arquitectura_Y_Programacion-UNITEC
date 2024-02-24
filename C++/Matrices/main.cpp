/*
    Programa Hola Mundo
    Autor: Ing. Gustavo David Mendoza Pinto
                UNITEC
    Arquitectura y Programación de Computadoras
        24 - 1
        Programa que suma dos matrices de 3 x 3
*/
#include<iostream>
#include"matlib.hpp"

int main(int argc, char **argv){
    matrixF32 MA, MB, RM;
    MA = readMatrixF32("Mat01.csv");
    MB = readMatrixF32("Mat02.csv");
    
    printMatrixF32(&MA);
    printMatrixF32(&MB);
    RM = addMatrixF32(&MA, &MB);
    printMatrixF32(&RM);
    saveMatrixF32(&RM,"addMat.csv");
    deleteMatrixF32(&MA);
    deleteMatrixF32(&MB);
    deleteMatrixF32(&RM);
    return 0;
}