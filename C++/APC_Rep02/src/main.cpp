#include"pgm.hpp"

int main(int argc, char **argv){
    imagePGM imagen;
    imagen.makeImage(8640,15360);
    int valor = 0;
    int h = imagen.getRows();
    int w = imagen.getCols();

    for(int i0 = 0; i0 < h; ++i0){
        for(int j0 = 0; j0 < w; ++j0){
            imagen.data[i0][j0] = valor; 
        }
        if( i0/8 - valor > 8){
            ++valor;
            if(valor > 255){
                valor = 255;
            }
        }     
    }
    imagen.saveImage("Prueba");
    

    imagen.deleteImage();
    return 0;
}