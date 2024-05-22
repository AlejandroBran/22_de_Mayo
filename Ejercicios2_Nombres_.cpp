#include <iostream>

using namespace std;

int main(){
    
    string Nombres[5];
    

    for(int i=0; i<5; i++){

        cout<< "Introduzca un nombre: "<<"\n";
        cin >> Nombres[i];

    

    }
    for(int j=0; j<5; j++){
        cout << " Nombres "<<"\n"<<j+1<<Nombres[j];
    }
    


    return 0;
}