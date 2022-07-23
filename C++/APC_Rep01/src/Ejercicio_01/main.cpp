#include<iostream>

using namespace std;

int main(int argc, char **argv){

    double m, xn, Error, ErrorP, xn_1;

    if(argc < 2){
        cout<<"[-]  Error [1] faltan  el número m "<< argv[0] <<" m xn Error"<<endl;
        return -1;
    }else if(argc < 3){
        cout<<"[-] Error [2] faltan  la aproximación xn "<< argv[0] <<" m xn Error"<<endl;
        return -2;
    } else if(argc < 4){
        cout<<"[-] Error [3] faltan  el rango de error"<< argv[0] <<" m xn Error"<<endl;
        return -3;
    }else{
        m = atof(argv[1]);
        xn = atof(argv[2]);
        Error = atof(argv[3]);
    }
    // cout<<"Los argumentos ingresados son: "<< m << ", "<< xn <<", " << Error << endl;
    double Error2 = Error*Error;
    ErrorP = 100;
    while (ErrorP > Error2)
    {
        xn_1 = 0.5*(xn + m/xn);
        ErrorP = (xn_1-xn)*(xn_1-xn)/(xn_1*xn_1);
        xn = xn_1;
    }
    cout<<"[+] La raiz de " << m << ", Es aproximadamente: "<< xn<<endl;
    
    return 0;
}
