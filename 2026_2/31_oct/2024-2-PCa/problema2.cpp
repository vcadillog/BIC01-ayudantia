#include <cstdlib>
#include <iostream>

using namespace std;
const double MARGEN=0.1;

int main() {
  srand(time(0));
  int tamano = 20;
  double arreglo[tamano];
  for (int i = 0; i < tamano; i++) {
    arreglo[i] = (random() % 56 + 95) / 10.;
    cout << arreglo[i] << " ";
  }
  cout << endl;
  // ascendente
  for (int j = 0; j < tamano - 1; j++) {
    for (int i = 0; i < tamano - 1; i++) {
      if (arreglo[i] > arreglo[i + 1]) {
        double temp = arreglo[i];
        arreglo[i] = arreglo[i + 1];
        arreglo[i + 1] = temp;
      }
    }
  }
  for (int i = 0; i < tamano; i++) {
    cout << arreglo[i] << " ";
  }
  cout << endl;

  double tiempo;
  cout << "Ingrese el tiempo: ";
  cin >> tiempo;
  double arregloTemp[tamano];
  for (int i = 0; i < tamano; i++) {
    arregloTemp[i] = abs(arreglo[i] - tiempo);
    if (arregloTemp[i] < MARGEN){
    cout <<"Posicion: "<< i << " "<< arreglo[i] << endl;
    }
  }

  return 0;
}
