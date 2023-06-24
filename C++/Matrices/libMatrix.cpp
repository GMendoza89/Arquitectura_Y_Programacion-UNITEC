#include"libMatrix.hpp"

void makeMatriz(matriz *M, unsigned int r, unsigned int c){
    M->rows = r;
    M->cols = c;
    M->data = new int*[M->rows];
    for(int i = 0; i < M->rows; i++){
        M->data[i] = new int[M->cols];
    }

}
void deleteMatriz(matriz *M){
    for(int i =0 ;i < M->rows; i++){
        delete M->data[i];
    }
    delete M->data;
    

}
void printMatriz(matriz *M){
    for(int i = 0; i<M->rows; i++){
        for(int j = 0; j < M->cols; j++){
            cout << M->data[i][j]<< " "; 
        }
        cout << "\n";
    }
}
void saveMatriz(matriz *M, string fileName){
    ofstream oFile;
    oFile.open(fileName);

    oFile << M->rows <<" "<<M->cols<<"\n";
    for(int i = 0; i<M->rows; i++ ){
        for(int j = 0; j<M->cols; j++){
            oFile<<M->data[i][j]<<" ";
        }
        oFile<<"\n";
    }
    oFile.close();
}
matriz readMatriz(string fileName){
    matriz M;
    ifstream iFile;

    iFile.open(fileName);
    iFile >> M.rows;
    iFile >> M.cols;
    M.data = new int*[M.rows];
    for(int i = 0; i < M.rows; i++){
        M.data[i] = new int[M.cols];
    }
    for(int i = 0; i<M.rows; i++ ){
        for(int j = 0; j<M.cols; j++){
            iFile>>M.data[i][j];
        }
    }
    iFile.close();
    return M;

}