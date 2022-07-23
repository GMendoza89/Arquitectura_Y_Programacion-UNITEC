#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include<iostream>

using namespace std;

struct _matriz
{
    int rows;
    int cols;
    double data;
};
typedef _matriz matriz;

matriz makeMatriz(int r, int c);
void deleteMatriz(matriz M);

void saveMatriz(string name, matriz M);         //Funcion que guarda una matrix

matriz readMatriz(string name);                 //Funcion que hace lectura de una matriz
matriz sumaMatriz(matriz M1, matriz M2);        //Funcion que suma dos Matrices 

matriz mulMatriz(matriz A, matriz B);           // Funcion que multiplica matrices
#endif