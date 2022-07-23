#include"matriz.hpp"

matriz makeMatriz(int r, int c){
    matrix M;

    M.rows = r;
    M.cols = c;
    M.data = new double*[M.rows];
    for(int i =0 ;i<M.rows;++i){
        M.data[i] = new double[M.cols];
    }
    return M;
}

void deleteMatriz(matriz M){
    for(int i =0; i<M.rows;++i){
       delete M.data[i];
    }
    delete M.data;
}

void saveMatriz(string name, matriz M){
    ofstream File;
    File.open(name);
    File << M.rows <<" ";
    File<< M.cols<<endl;
    for(int i = 0; i< M.rows; ++i){
        for(int j = 0; j<M.cols; ++j){
           File<< M.data[i][j] << " ";
        }
        File<<endl;
    }
    File.close();
}
matriz readMatriz(string name){
    ifstream File;
    File.open(name);
    matrix M;

    File >> M.rows;
    File >>M.cols;
    M.data = new double*[M.rows];
    for(int i =0 ;i<M.rows;++i){
        M.data[i] = new double[M.cols];
    }
    for(int i = 0; i< M.rows; ++i){
        for(int j = 0; j<M.cols; ++j){
        File>>M.data[i][j];
        }
    }
    File.close();
    return M;  
}
matriz sumaMatriz(matriz M1, matriz M2){
    matrix MR;
    if(M1.rows != M2.rows || M1.cols != M2.cols){
        cout<<"Error las matrices son de diferentes dimensiones"<<endl;
        return MR;
    }
    MR = makeMatriz(M1.rows,M1.cols);
    for(int i = 0; i< MR.rows; ++i){
        for(int j = 0; j<MR.cols; ++j){
        MR.data[i][j] = M1.data[i][j] + M2.data[i][j];
        }
    }
    return MR;
}

matriz mulMatriz(matriz A, matriz B){
    matriz C;
    if(A.cols != B.rows){
        cout<< "[+] La matrices no se pueden multiplicar renglones de la matriz A, son diferentea al numero de columnas de la matriz B"<< endl;
        return C;
    }

    C = makeMatriz(A.rows, B.cols);

    for(int i = 0; i< C.rows ; ++i){
        for(int j = 0; j< C.cols; ++j){
            for(int k = 0; k<A.cols; ++l){
                C.data[i][j] += A.data[i][k]*B.data[k][j];
            }
        }
    }

}