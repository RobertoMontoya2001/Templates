#include <iostream>
#include "arreglo.h"
using namespace std;

int main() {
    
    Arreglo<string> arreglo;


    
    arreglo.insertar_final("ete"); 
    arreglo.insertar_final("sech"); 
    arreglo.insertar_inicio("mundo"); 
    arreglo.insertar_inicio("Hola"); 

    for (size_t i = 0 ; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";         
    }
    cout << endl<< endl;

    arreglo.insertar("para",2);

    for (size_t i = 0 ; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";         
    }
    cout << endl << endl;

    arreglo.eliminar_inicio();
    arreglo.eliminar_final(); 
    arreglo.eliminar(1);

    for (size_t i = 0 ; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";         
    }
    cout << endl<< endl;

    return 0;
}