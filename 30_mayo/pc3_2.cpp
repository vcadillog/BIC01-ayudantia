#include <ctime>
#include <iostream>
#include <random>

using namespace std;

// N 0...N
// El tamaño es 10
// Los valores que pueden tomar es de 0 a 20
//
// Ordenado [0,1,2...,20]
// creo otro arreglo de tamaño 10
// elijo de forma aleatoria los indices del otro arreglo
//
int main() {
  srand(time(0));
  int N = 20;
  int a[N];
  cout << endl;
  for (int i = 0; i < N; i++) {
    // generar aleatoriamente un numero
    int j = random() % (N + 21);
    a[i] = j;
  }

  for (int i = 0; i < N; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  // 1. ordenar [1,1,3,5,9,9,9,10,15]
  // contador
  // 2. eliminar duplicados [1,3,5,9,10,15]
  // 3. contadores por elemento unico [2,1,1,3,1,1]
  // obtienes el indice del maximo contador y luego muestras el arreglo en ese indice para obtener el elemento con maximas repeticiones

  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N - i - 1; j++) {
      if (a[j] < a[j + 1]) {
        // swap
        swap(a[j], a[j + 1]); // -> a[j]=a[j+1], a[j+1]=a[j]
      }
    }
  }

  for (int i = 0; i < N; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  int contadorMaximo = 0;
  int moda=a[0];

  for (int i = 0; i < N - 1; i++) {
    int contador = 1;
    int valor;
    for (int j = i + 1; j < N; j++) {
      if (a[i] != a[j]) {
          break;
      }
      contador++;
      valor = a[i];
    }
    if (contadorMaximo < contador){
        contadorMaximo = contador;
        moda = valor;
    }
  }
  cout << "Moda de:"<< moda <<" cantidad de veces que se repite: "<< contadorMaximo<< endl;
}
