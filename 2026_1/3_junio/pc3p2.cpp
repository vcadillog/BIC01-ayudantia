#include <iostream>

using namespace std;

int main() {
  int COL = 2;
  int FIL = 3;
  double array[FIL][COL];
  cout << "Introduce los 6 elementos de la matriz 3x2 (fila por fila):\n";
  for (int i = 0; i < FIL; i++) {
    for (int j = 0; j < COL; j++) {
        cout << "Ingrese el elemento en la Fila: "<<i<<" Columna: "<<j<<endl;
        cin >> array[i][j];
        cout << endl;
    }
  }

  double mayor = array[0][0];
  double menor = array[0][0];
  int mayor_i = 0;
  int mayor_j = 0;
  int menor_i = 0;
  int menor_j = 0;
  cout << "Matriz original\n";
  for (int i = 0; i < FIL; i++) {
    for (int j = 0; j < COL; j++) {
        cout << array[i][j] << " ";
        //mayor
        if (array[i][j]>mayor){
            mayor = array[i][j];
            mayor_i = i;
            mayor_j = j;
        }
        //menor
        if (array[i][j]<menor){
            menor = array[i][j];
            menor_i = i;
            menor_j = j;
        }
    }
    cout << endl;
  }

  //Transpuesta
  cout << "Matriz transpuesta\n";
  for (int i = 0; i < COL; i++) {
    for (int j = 0; j < FIL; j++) {
        cout << array[j][i] << " ";
    }
    cout << endl;
  }
  cout << "El elemento mayor es: "<< mayor <<" en la posición i: "<<mayor_i<<" j: "<<mayor_j<<endl;
  cout << "El elemento menor es: "<< menor <<" en la posición i: "<<menor_i<<" j: "<<menor_j<<endl;

  return 0;
}
