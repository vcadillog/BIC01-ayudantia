#include <cmath>
#include <iostream>

using namespace std;

int main() {
  // A = M filas x 3 columnas
  // M triangulos
  // B[M]
  // B represtan el area de los triangulos
  // B aplicar burbuja simultaneamente con las filas de A
  const int M = 4;
  double A[M][3] = {{5, 3, 7}, {15, 20, 4}, {4, 9, 6}, {8, 4, 5}};
  double B[M];
  for (int i = 0; i < M; i++) {
    // formula de area de triangulo
    double s = (A[i][0] + A[i][1] + A[i][2]) / 2;
    double area = sqrt(abs(s * (s - A[i][0]) * (s - A[i][1]) * (s - A[i][2])));
    B[i] = area;
    cout << B[i] << " ";
  }
  cout << endl;

  for (int i = 0; i < M - 1; i++) {
    for (int j = 0; j < M - i - 1; j++) {
      if (B[j] > B[j + 1]) {
        // swap
        swap(B[j], B[j + 1]); // -> a[j]=a[j+1], a[j+1]=a[j]
        // swap -> (temp = a, a=b, b=a)
        //  intercambiar fila 1 con fila 2 por ej
        //  crear un array con todas las filas de 1
        //
        //  Funciona intercambiando punteros porque una matriz es un arreglo de arreglos
        // swap(A[j],A[j+1]);
        
        double temp[M];
        for (int k = 0; k < 3; k++) {
          temp[k] = A[j][k];
        }
        for (int k = 0; k < 3; k++) {
          A[j][k] = A[j + 1][k];
        }
        for (int k = 0; k < 3; k++) {
          A[j + 1][k] = temp[k];
        }
      }
    }
  }

  for (int i = 0; i < M; i++) {
    cout << B[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < 3; j++) {
      cout << A[i][j] << " ";
    }
    cout << B[i] << endl;
  }

  cout << endl;
  return 0;
}
