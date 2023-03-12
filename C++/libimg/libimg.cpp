#include"libimg.hpp"

pgm makeImagePGM(int w, int h){
    pgm img;
    img.width = w;
    img.height = h;
    img.tag = "P2";
    img.maxValue = 0;

    img.data = new unsigned int *[img.height];
    for(int i =0; i< img.height; i++){
        img.data[i] = new unsigned int [img.width];
    }
    return img;   
}
void maxImagePGMValue(pgm *img){
    unsigned int max = 0;
    for(int i = 0; i< img->height; i++){
        for(int j = 0; j < img->width; j++){
            if(max < img->data[i][j]){
                max = img->data[i][j];
                //cout <<"Nuevo valor maximo "<< max;
            }
        }
    }
    img->maxValue = max;
}

void deleteImagePGM(pgm img){
    for(int i =0; i< img.height; i++){
        delete [] img.data[i];
    }
    delete [] img.data;

}
pgm readImagePGM(string fName){
    ifstream iFile;
    iFile.open(fName);
    unsigned int h;
    unsigned int w;
    string t;
    unsigned int maxV;
    pgm img;
    iFile >> t;
    iFile >> w;
    iFile >> h;
    iFile >> maxV;
    img = makeImagePGM(w,h);
    img.tag = t;
    img.maxValue = maxV;
    for(int i = 0; i< img.height; i++){
        for(int j = 0; j < img.width; j++){
            iFile >> img.data[i][j];
        }
    }
    iFile.close();
    return img;
}
void saveImagePGM(string fname, pgm img){
    ofstream oFile;
    oFile.open(fname+".pgm");
    oFile <<  img.tag << "\n";
    oFile << img.width << " " << img.height << "\n";
    oFile << img.maxValue << "\n";
    for(int i = 0; i< img.height; i++){
        for(int j = 0; j < img.width; j++){
            oFile << img.data[i][j]<<" ";
        }
        oFile<<"\n";
    }
    oFile.close();
}