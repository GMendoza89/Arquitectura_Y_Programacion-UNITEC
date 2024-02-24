#ifndef MATLIB_HPP
#define MATLIB_HPP

#include<iostream>
#include<fstream>

struct _matrixF32
{
    unsigned short int hight; // alto de matriz o numero de filas
    unsigned short int width; // ancho de la matriz o número de columnas
    float *data;
};
typedef _matrixF32 matrixF32;

/*
Name : makeMatrixF32
description: asigna el espacio de una matriz dando los valores de filas y columnas necesarias
*/
matrixF32 makeMatrixF32(unsigned short int h, unsigned short int w);

/*
Name : deleteMatrixF32
description: libera la memoria designada a  una matriz dada
*/
void deleteMatrixF32(matrixF32 *matrixA);

/*
Name : printMatrixF32
description: muestra en consola los datos de una matriz
*/
void printMatrixF32(matrixF32 *matrixA);

/*
Name : saveMatrixF32
description: muestra en consola los datos de una matriz
*/
void saveMatrixF32(matrixF32 *matrixA, std::string fileName);

/*
Name : readMatrixF32
description: muestra en consola los datos de una matriz
*/
matrixF32 readMatrixF32(std::string fileName);

/*
Name : addMatrixF32
description: muestra en consola los datos de una matriz
*/
matrixF32 addMatrixF32(matrixF32 *matrixA, matrixF32 *matrixB);




#endif