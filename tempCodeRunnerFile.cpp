#include <iostream>

using namespace std;

int main(){

    float Notas[6];
    float Promedio =0;

    for(int i=0; i<6; i++){

        cout<< "Ingrese sus notas: "<<"\n";
        cin >> Notas[i];

    Promedio = Promedio + Notas[i];

    }
    cout<<"Su promedio es. "<<Promedio/6;


    return 0;
}