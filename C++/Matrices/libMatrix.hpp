#ifndef LIBMATRIX_HPP
#define LIBMATRIX_HPP

#include<iostream>
#include<fstream>
using namespace std;

struct _matriz
{
    unsigned int cols;
    unsigned int rows;
    int **data;
}; 
typedef _matriz matriz;

void makeMatriz(matriz *M, unsigned int r, unsigned int c);
void deleteMatriz(matriz *M);
void printMatriz(matriz *M);
void saveMatriz(matriz *M, string fileName);
matriz readMatriz(string fileName);

#endif