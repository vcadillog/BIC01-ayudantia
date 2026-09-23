#include <iostream>

using namespace std;

int main(){
    double entrada, resta;
    int entero;
    cout << "Ingrese un número real:\n";
    cin >> entrada;
    entero = entrada;
    resta = entrada-entero;
    // Determina si es entero
        cout << "El número es ";
    if (entrada < 0){
        cout <<"NEGATIVO\n";
    }
    else if (entrada > 0){
        cout <<"POSITIVO\n";
    }
    else {
        cout << "CERO\n";
    }
    cout << "Es un número ";
    if (resta== 0){
        cout << "entero\n";
    }
    else{
        cout << "decimal\n";
    }

    return 0;
}
