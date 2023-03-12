#ifndef LIBIMG_HPP
#define LIBIMG_HPP

#include<iostream>
#include<fstream>

using namespace std;

typedef struct _pgm{
    string tag;
    unsigned int width;
    unsigned int height;
    unsigned int maxValue;
    unsigned int **data; 
} pgm;

pgm makeImagePGM(int w, int h);
void maxImagePGMValue(pgm *img);
void deleteImagePGM(pgm img);
pgm readImagePGM(string fName);
void saveImagePGM(string fname, pgm img);

#endif