#ifndef PGM_HPP
#define PGM_HPP

#include<iostream>
#include<fstream>
#include<string>

using namespace std;


class imagePGM{
    private:
    // Atributos Privados de la imagen
    int rows, cols; // Alto y ancho de la imagen
    int max;
    string tag;
    void maxValue();
    public:
    //Atributos publicos de la imagen
    int **data; // Datos de la imagen   
    //Metodos de la imagen
    imagePGM();
    imagePGM(int r, int c);
    ~imagePGM();
    void makeImage(int r, int c);
    void deleteImage();
    int getRows();
    int getCols();
    void saveImage(string name);

};
#endif