#include"linealequ.hpp"

int main(int argc, char **argv){
    double A,B,C,D,E,F;

    if(argc<2){
        cout<<"[-] Error faltan el argumento A ejemplo "<< argv[0]<<" A B C D E F"<<endl;
        return -1;
    }else if(argc < 3){
        cout<<"[-] Error faltan el argumento B ejemplo "<< argv[0]<<" A B C D E F"<<endl;
        return -2;
    }else if(argc < 4){
        cout<<"[-] Error faltan el argumento C ejemplo "<< argv[0]<<" A B C D E F"<<endl;
        return -3;
    }else if(argc < 5){
        cout<<"[-] Error faltan el argumento D ejemplo "<< argv[0]<<" A B C D E F"<<endl;
        return -4;
    }else if(argc < 6){
        cout<<"[-] Error faltan el argumento E ejemplo "<< argv[0]<<" A B C D E F"<<endl;
        return -5;
    }else if(argc < 7){
        cout<<"[-] Error faltan el argumento F ejemplo "<< argv[0]<<" A B C D E F"<<endl;
        return -6;
    }else{
        A =  atof(argv[1]);
        B =  atof(argv[2]);
        C =  atof(argv[3]);
        D =  atof(argv[4]);
        E =  atof(argv[5]);
        F =  atof(argv[6]);
    }

    solEqu2Incon(&A,&B,&C,&D,&E,&F);
    return 0;
}