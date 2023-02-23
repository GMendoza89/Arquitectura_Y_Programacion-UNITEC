#include<iostream>
#include<fstream>
#include"libmatrix.hpp"
using namespace std;

int main(int argc, char** argv){
    
    nMatrix M,M2;
    unsigned int cols, rows;
    ofstream oFile;
    oFile.open("matrix.csv");
    cout<< "Ingresa el numero de renglones: ";
    cin >> rows;
    cout<< "Ingresa el numero de columnas: ";
    cin >> cols;
    
    M = mknMatrix(rows,cols);
    for(int i =0; i < M.rows;++i){
        for(int j = 0; j < M.cols; ++j){
            //cout<<"A["<<i<<"]["<<j<<"]= "<< i*M.rows+j;
            M.data[i][j] = i*M.cols+j;
        }
    }
    oFile << M.rows << " " << M.cols << endl;
    for(int i =0; i < M.rows;++i){
        for(int j = 0; j < M.cols; ++j){
            cout<< M.data[i][j] << " ";
            oFile<< M.data[i][j] << " ";
        }
        cout<<endl;
        oFile<<endl;
    }
    oFile.close();
    M2 = readnMatrix("matrix.csv");
    
    for(int i =0; i < M.rows;++i){
        for(int j = 0; j < M.cols; ++j){
            cout<< M2.data[i][j] << " ";
            
        }
        cout<<endl;
    }
    dnMatrix(M);
    dnMatrix(M2);
    return 0;
} 