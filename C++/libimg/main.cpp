#include<iostream>
#include"libimg.hpp"

using namespace std;

int main(int argc, char **argv){
    pgm img;
    int H;
    int W;
    if(argc == 3){
        W = atoi(argv[1]);
        H = atoi(argv[2]);
    }else{
        cout<<"Ingresa el ancho de la imagen: ";
        cin>>W;
        cout<<"Ingresa el alto de la imagen: ";
        cin >>H;
    }

    int delta = 10;
    int deltaColor = 255/delta;
    int deltaHeight = H/10;
    int incremento = 0;
    int incrementoColor = 0;
    //int color = 0;
    img = makeImagePGM(W,H);
    for(int i = 0; i< img.height; i++){
        if(incremento > deltaHeight){
                incremento = 0;
                incrementoColor += 1;
                cout << "Generando nueva franja, color:  "<< incrementoColor*deltaColor<<"\n";
            }
        for(int j = 0; j < img.width; j++){
            img.data[i][j] = incrementoColor*deltaColor;  
        }
            incremento += 1;
    }

    maxImagePGMValue(&img);
    saveImagePGM("FranjasHorizontales",img);

    deleteImagePGM(img);

    return 0;
}