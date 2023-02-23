#include"libmatrix.hpp"

dMatrix mkdMatrix(unsigned int R, unsigned int C ){
    dMatrix M;
    M.rows = R;
    M.cols = C;
    M.data = new double*[M.rows];
    for(int i = 0; i < M.rows; ++i){
        M.data[i] = new double[M.cols];
    }
    return M;
}
nMatrix mknMatrix(unsigned int R, unsigned int C ){
    nMatrix M;
    M.rows = R;
    M.cols = C;
    M.data = new long int*[M.rows];
    for(int i = 0; i < M.rows; ++i){
        M.data[i] = new long int[M.cols];
    }
    return M;
}
void ddMatrix(dMatrix M){
    if(M.data == nullptr){
        return;
    }
    for(int i = 0; i < M.rows; ++i){
        delete [] M.data[i];
    }
    delete [] M.data;
}

void dnMatrix(nMatrix M){
    if(M.data == nullptr){
        return;
    }
    for(int i = 0; i < M.rows; ++i){
        delete [] M.data[i];
    }
    delete [] M.data;
}
nMatrix readnMatrix(string fileName){
    ifstream iFile;
    unsigned int R, C;
    nMatrix M;
    iFile.open(fileName);
    iFile >> R;
    iFile >> C;
    M = mknMatrix(R,C);
    for(int i =0; i < M.rows;++i){
        for(int j = 0; j < M.cols; ++j){
            iFile >> M.data[i][j];
        }
    }
    iFile.close();
    return M;
}

dMatrix readdMatrix(string fileName){
    ifstream iFile;
    unsigned int R, C;
    dMatrix M;
    iFile.open(fileName);
    iFile >> R;
    iFile >> C;
    M = mkdMatrix(R,C);
    for(int i =0; i < M.rows;++i){
        for(int j = 0; j < M.cols; ++j){
            iFile >> M.data[i][j];
        }
    }
    iFile.close();
    return M;
}