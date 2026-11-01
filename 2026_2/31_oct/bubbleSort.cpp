#include <iostream>

using namespace std;

int main() {
  int arreglo[6] = {1, 6, 3, 4, 5, 2};
  int tamano = sizeof(arreglo) / sizeof(arreglo[0]);
  // ascendente
  for (int j = 0; j < tamano - 1; j++) {
    for (int i = 0; i < tamano - 1; i++) {
      if (arreglo[i] > arreglo[i + 1]) {
        int temp = arreglo[i];
        arreglo[i] = arreglo[i + 1];
        arreglo[i + 1] = temp;
      }
    }
  }
  for (int i = 0; i < tamano; i++) {
    cout << arreglo[i] << " ";
  }
  cout << endl;
  return 0;
}

