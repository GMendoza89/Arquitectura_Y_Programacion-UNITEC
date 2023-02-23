#include<iostream>
#include<fstream>


using namespace std;
typedef struct _intMatrix{ 
    unsigned int rows; 
    unsigned int cols; 
    long int **data;
} nMatrix;

//*************** Declaracion de funciones *********************
nMatrix mknMatrix(unsigned int R, unsigned int C );
void dnMatrix(nMatrix M);

//***************************************************************
int main(int argc, char** argv){
    
    nMatrix M;
    
    M = mknMatrix(3,3);

    for(int i = 0; i < M.rows;++i){
        for(int j =0; j< M.cols; ++j){
            M.data[i][j] = i*M.cols +j;
        }
    }
    for(int i = 0; i < M.rows;++i){
        for(int j =0; j< M.cols; ++j){
            cout << M.data[i][j]<< " ";
        }
        cout<<"\n";
    }
    dnMatrix(M);
    
    return 0;
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

void dnMatrix(nMatrix M){
    if(M.data == nullptr){
        return;
    }
    for(int i = 0; i < M.rows; ++i){
        delete [] M.data[i];
    }
    delete [] M.data;
}