#include"../include/mylib.hpp"

int main(int argc, char **argv){ 
	float A,B,C,D,E,F, numX, numY, den, X,Y;

    cout << "Solucion del sistema de ecuaciones de la forma \n";
    cout << "\t AX + BY = C \n";
    cout << "\t DX + EY = F \n";
    cout << "Ingrese el valor de A:";
    cin >> A;
    cout << "Ingrese el valor de B:";
    cin >> B;
    cout << "Ingrese el valor de C:";
    cin >> C;
    cout << "Ingrese el valor de D:";
    cin >> D;
    cout << "Ingrese el valor de E:";
    cin >> E;
    cout << "Ingrese el valor de F:";
    cin >> F;

    den = getDenominator(A,B,C,D);
    if(den == 0 ){
        cout<<"El conjunto solucion X,Y se encuentra en el Infinito\n";
        return 0;
    }
    numX = getNumX(C,E,B,F);
    numY = getNumY(A,C,D,F);
    X = numX/den;
    Y = numY/den;

    cout<<"el conjunto solucion se encuentra en las coordenadas " << X << ", "<< Y<<endl;
	return 0;
}

