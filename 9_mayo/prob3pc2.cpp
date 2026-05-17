#include <ctime>
#include <iostream>
#include <random>

using namespace std;

int main() {

  srand(time(0));
  // i = x, j = y, k = z
  // valor 3 , 30
  // a[27] = [2,0,0,...,1]
  int a = 0; // valor
  int b = 0; // cantidad de veces
  int contadorMaximo = 0;

  for (int val = 3; val <= 30; val++) {
    int counter = 0;
    for (int i = 1; i <= 10; i++) {
      for (int j = 1; j <= 10; j++) {
        for (int k = 1; k <= 10; k++) {
          int valor = i + j + k;
          if (val == valor) {
            counter++;
            if (contadorMaximo <= counter) {
              contadorMaximo = counter;
            }
          }
        }
      }
    }
  }
  //cout << contadorMaximo << endl;
  //
  for (int val = 3; val <= 30; val++) {
    int counter = 0;
    for (int i = 1; i <= 10; i++) {
      for (int j = 1; j <= 10; j++) {
        for (int k = 1; k <= 10; k++) {
          int valor = i + j + k;
          if (val == valor) {
            counter++;
            if (contadorMaximo == counter) {
              cout <<"Conteo: "<< counter <<" Valor: "<<val<< endl;
            }
          }
        }
      }
    }
  }
  return 0;
}
