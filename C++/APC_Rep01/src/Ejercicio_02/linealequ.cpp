#include"linealequ.hpp"

void solEqu2Incon(double *a, double *b, double *c, double *d, double *e, double *f){
    double denominador = denEqu2incon(a,b,d,e);
    double numeradorX = numXEqu2incon(b,c,e,f);
    double numeradorY = numYEqu2incon(a,c,d,f);

    if(denominador){
        cout<< "[+] El conjunto solucion es igual a: " << numeradorX/denominador << ", "<< numeradorY/denominador<< endl;
    }else{
        cout<<"[+] El conjunto Solicion se encuentra en el infinito"<<endl;
    }  
}

double denEqu2incon(double *a, double *b, double *d, double *e){
    return ((*a)*(*e) - (*b)*(*d));
}
double numXEqu2incon(double *b, double *c, double *e, double *f){
    return ((*c)*(*e) - (*f)*(*b));
}
double numYEqu2incon(double *a, double *c, double *d, double *f){
    return ((*a)*(*f) - (*c)*(*d));
}