#include<iostream>
#include<fstream>

#ifndef LIBMATRIX_HPP
#define LIBMATRIX_HPP

using namespace std;

typedef struct _doubleMatrix
{
    unsigned int rows;
    unsigned int cols;
    double **data;

} dMatrix;

typedef struct _intMatrix
{
    unsigned int rows;
    unsigned int cols;
    long int **data;

} nMatrix;



dMatrix mkdMatrix(unsigned int R, unsigned int C );
nMatrix mknMatrix(unsigned int R, unsigned int C );

void ddMatrix(dMatrix M);
void dnMatrix(nMatrix M);

nMatrix readnMatrix(string fileName);
dMatrix readdMatrix(string fileName);

#endif