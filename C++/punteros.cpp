#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char** argv){
    
    int **F;
    int cols, rows;
    ofstream oFile;
    oFile.open("matrix.csv");
    cout<< "Ingresa el numero de renglones: ";
    cin >> rows;
    cout<< "Ingresa el numero de columnas: ";
    cin >> cols;
    F = new int*[rows];
    for(int i = 0; i<rows;++i){
        F[i] = new int [cols];
    }
    for(int i =0; i< rows;++i){
        for(int j = 0; j<cols; ++j){
            cout<<"A["<<i<<"]["<<j<<"]= ";
            cin>> F[i][j];
        }
    }
    for(int i =0; i< rows;++i){
        for(int j = 0; j<cols; ++j){
            cout<< F[i][j] << ", ";
            oFile<< F[i][j] << ", ";
        }
        cout<<endl;
        oFile<<endl;
    }
    oFile.close();
    for(int i = 0; i<rows;++i){
        delete [] F[i];
    }
    delete [] F;
    return 0;
}