#include"PGM.hpp"

int main(int argv, char **argc){

    imagePGM img;
    int W,H;
    if(argv != 3){
        cout<<"[-] Error faltan argumento ejemplo\n "<<argc[0]<<" W H\n";
        return -1;
    }else{
        W = atoi(argc[1]);
        H = atoi(argc[2]);
    }
    

    img.makeImage(H,W);

    for(int i0 = 0; i0 <H; i0++){
        for(int j0 = 0; j0<W; j0++){
            img.data[i0][j0] = 1;
        }
    }
    img.saveImage("Gris");
    img.deleteImage();
    return 0;

}