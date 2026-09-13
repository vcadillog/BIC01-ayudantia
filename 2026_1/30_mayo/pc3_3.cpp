#include <ctime>
#include <iostream>
#include <random>

using namespace std;

int main() {
  srand(time(0));
  int N = 4;
  int a[N][N];
  int b[N][N];
  int c[N][N];
  int M = 10;
  cout << "Matriz A:\n";
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      // generar aleatoriamente un numero
      a[i][j] = random() % M + 1;
      b[i][j] = random() % M + 1;
      // i=0 j=0...N
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  cout << "Matriz B:\n";
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      // generar aleatoriamente un numero
      // i=0 j=0...N
      cout << b[i][j] << " ";
    }
    cout << endl;
  }

  // fila A * columna B
  for (int k = 0; k < N; k++) {
    for (int i = 0; i < N; i++) {
      // C[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0] + a[0][2]*b[2][0] +
      // a[0][3]*b[3][0] +...
      // C[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0] +
      // a[1][2]*b[2][0] + a[1][3]*b[3][0] +...
      c[i][k] = 0;
      for (int j = 0; j < N; j++) {
        // i= 1
        // k=0...N
        // c[i][0] = c[i][0] + a[i][j] * b[j][0];
        c[i][k] = c[i][k] + a[i][j] * b[j][k];
      }
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << c[i][j] << " ";
    }
    cout << endl;
  }
}
