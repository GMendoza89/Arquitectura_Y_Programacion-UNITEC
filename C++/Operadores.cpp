#include<iostream>

using namespace std;

int main(int argc, char **argv){

    int variable1 = 5, variable2 = 19, variable3;
    variable3 = variable1++ + variable2;

    cout<<"El resultado de la suma es: "<< variable3<<endl;
    cout << "Variable A: " << variable1<<endl;
    cout << "Variable B: " << variable2<<endl;

    
   
    return 0;
}