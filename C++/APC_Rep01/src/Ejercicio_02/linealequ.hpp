#ifndef LIEALEQU_HPP
#define LIEALEQU_HPP

#include<iostream>

using namespace std;

void solEqu2Incon(double *a, double *b, double *c, double *d, double *e, double *f);

double denEqu2incon(double *a, double *b, double *d, double *e);
double numXEqu2incon(double *b, double *c, double *e, double *f);
double numYEqu2incon(double *a, double *c, double *d, double *f);


#endif