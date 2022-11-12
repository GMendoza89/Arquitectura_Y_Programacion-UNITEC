#ifndef PGM_HPP
#define PGM_HPP

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class imagePGM{

    private:
        int rows,cols, max;
        string tag;
        void maxValue();

    public:
         int **data;
         imagePGM();
         ~imagePGM();
         void makeImage(int r, int c);
         void deleteImage();
         void saveImage(string name);
         void readImg(string name);
         
};

#endif