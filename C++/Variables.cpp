#include<iostream>
#include<fstream>

using namespace std;

int main(int argv, char **argc){
    
    int M,N;

    cout <<"Ingresa el numero de filas de la matriz: ";
    cin >> M;
    cout <<"Ingresa el numero de columnas de la matriz: ";
    cin >> N;
    float A[M][N];
    float B[M][N];
    float C[M][N];
    ofstream Archivo("matriz resultado.txt"); 

    for(int i = 0; i<M; ++i){
        for(int j =0; j<N;++j){
            A[i][j] = i*M+j+1;
            B[i][j] = i*M+j-1;
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for(int i = 0; i<M; ++i){
        for(int j =0; j<N;++j){
            cout<<A[i][j]<<", "; 
            //Archivo<<A[i][j]<<", ";    
        }
        cout<<endl;}
    for(int i = 0; i<M; ++i){
        for(int j =0; j<N;++j){
            cout<<B[i][j]<<", "; 
            //Archivo<<A[i][j]<<", ";    
        }
        cout<<endl;
        }
    for(int i = 0; i<M; ++i){
        for(int j =0; j<N;++j){
            //cout<<A[i][j]<<", "; 
            Archivo<<C[i][j]<<", ";    
        }
        Archivo<<endl;
        }
        
         
    


    Archivo.close();

    return 0;
}