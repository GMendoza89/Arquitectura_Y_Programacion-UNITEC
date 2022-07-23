#include"pgm.hpp"

imagePGM::imagePGM(){
    tag = "P2";
    rows = 0;
    cols = 0;
    max = 0;
    data = NULL;
}
imagePGM::imagePGM(int r, int c){
    tag = "P2";
    rows = r;
    cols = c;
    max = 0;

    data = new int*[rows];
    for(int i0 = 0; i0 < rows; ++i0){
        data[i0] = new int[cols];
    }
}
imagePGM::~imagePGM(){

}

void imagePGM::makeImage(int r, int c){
    tag = "P2";
    rows = r;
    cols = c;
    max = 0;

    data = new int*[rows];
    for(int i0 = 0; i0 < rows; ++i0){
        data[i0] = new int[cols];
    }
}
void imagePGM::deleteImage(){
    if(data == NULL){
        return;
    }
    for(int i0 = 0; i0 < rows; ++i0){
        delete(data[i0]);
    }
    delete(data);
}
int imagePGM::getRows(){
    return rows;
}

int imagePGM::getCols(){
    return cols;
}

void imagePGM::maxValue(){
    int M;
    M = 0;
    for(int i0 = 0; i0<rows; ++i0){
        for(int j0 = 0; j0 < cols; ++j0){
            if(data[i0][j0] > M){
                M = data[i0][j0];
            }
        }
    }
    max = M;

}
void imagePGM::saveImage(string name){
    ofstream image;
    maxValue();
    image.open(name+".pgm");
    image<<tag<<endl;
    image<<cols<<" "<<rows<<endl;
    image<<max<<endl;
    for(int i0 = 0; i0<rows; ++i0){
        for(int j0 = 0; j0 < cols; ++j0){
            image << data[i0][j0]<<" ";
        }
        image<<endl;
    }
    image.close();

}