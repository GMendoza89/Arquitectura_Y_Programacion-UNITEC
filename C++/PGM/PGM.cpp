#include"PGM.hpp"

imagePGM::imagePGM(){
    cols = 0;
    rows = 0;
    tag = "P2";
    data = NULL;
}
imagePGM::~imagePGM(){
    
}
void imagePGM::makeImage(int r, int c){
    rows = r;
    cols = c;

    data = new int*[rows];
    for(int i0 = 0; i0<rows;i0++){
        data[i0] = new int[cols];
    }
    //return;

}
void imagePGM::deleteImage(){
     for(int i0 = 0; i0<rows;i0++){
        delete(data[i0]);
    }
    delete data;
}
void  imagePGM::maxValue(){
    max = data[0][0];
    for(int i0 = 0; i0 <rows; i0++){
        for(int j0 = 0; j0<cols; j0++){
            if( data[i0][j0] > max){
                max = data[i0][j0];
            }
        }
        
    }
}

void imagePGM::saveImage(string name){
    ofstream img(name+".pgm");
    maxValue();
    img<<tag<<"\n";
    img<<cols<<" "<<rows<<"\n";
    img<<max<<"\n";

    for(int i0 = 0; i0 <rows; i0++){
        for(int j0 = 0; j0<cols; j0++){
            img<<data[i0][j0]<<" ";
        }
        img<<"\n";
    }
    img.close();

}
void imagePGM::readImg(string name){
    ifstream img(name);
    img>>tag;
    img>>cols;
    img>>rows;
    img>>max;
    makeImage(rows,cols);
    for(int i0 = 0; i0 <rows; i0++){
        for(int j0 = 0; j0<cols; j0++){
            img>>data[i0][j0];
        }
    }

}