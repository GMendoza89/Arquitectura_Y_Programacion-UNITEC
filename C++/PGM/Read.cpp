#include"PGM.hpp"

int main(int argv, char **argc){

    imagePGM img;
    string name;
    // if(argv != 3){
    //     cout<<"[-] Error faltan argumento ejemplo\n "<<argc[0]<<" W H\n";
    //     return -1;
    // }else{
    //     W = atoi(argc[1]);
    //     H = atoi(argc[2]);
    // }

    name = "imagen01.pgm";

    img.readImg(name);

    img.saveImage("Salida");
    img.deleteImage();
    return 0;

}