#include <cstdlib>
#include <iostream>

using namespace std;
const int tamano = 10;

int main() {
  srand(time(0));
  int arreglo[tamano];
  for (int i = 0; i < tamano; i++) {
    arreglo[i] = random() % 100 + 1;
    cout << arreglo[i] << " ";
  }
  cout << endl;
  // descendente
  for (int j = 0; j < tamano - 1; j++) {
    for (int i = 0; i < tamano - 1; i++) {
      if (arreglo[i] < arreglo[i + 1]) {
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
  // i -> c, j -> a, k -> b  // c = a+b
  for (int i = 0; i < tamano - 2; i++) {
    for (int j = i + 1; j < tamano - 1; j++) {
      for (int k = j + 1; k < tamano; k++) {
        if (arreglo[i] == arreglo[j] + arreglo[k]) {
          cout << arreglo[i] << "=" << arreglo[j] << "+" << arreglo[k] << endl;
        }
      }
    }
  }
  return 0;
}
