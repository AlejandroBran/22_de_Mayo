#include <iostream>

using namespace std;

int main(){

    int Numeros[100];
    int Suma = 0;

    for(int i=0; i<100; i++){

       Numeros[i] =i + 1;
       Suma = Suma + Numeros[i];

    

    }
    cout<<"El resultado es. "<<Suma<<"\n";


    return 0;
}