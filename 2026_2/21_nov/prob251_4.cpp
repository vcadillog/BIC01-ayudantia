#include <cstdlib>
#include <iomanip>
#include <iostream>

const int tamano = 5;
using namespace std;

// 1. genera matriz aleatoria
// 2. obtener diagonal principal
// 3. obtener diagonal secundaria

void generarMatrizAleatoria(int arreglo[][tamano]) {
  for (int i = 0; i < tamano; i++) {
    for (int j = 0; j < tamano; j++) {
      arreglo[i][j] = random() % 50 + 1;
    }
  }
}

void obtenerDiagonalPrincipal(int arreglo[][tamano], int diagonal[]) {
  for (int i = 0; i < tamano; i++) {
    diagonal[i] = arreglo[i][i];
  }
}

void obtenerDiagonalSecundaria(int arreglo[][tamano], int diagonal[]) {
  // [0,4], [1,3], [2,2], [3,1], [4,0]
  for (int i = 0; i < tamano; i++) {
    diagonal[i] = arreglo[i][tamano - i - 1];
  }
}

void sumarDiagonales(int diagonalPrincipal[], int diagonalSecundaria[],
                     int sumaDiagonales[]) {
  for (int i = 0; i < tamano; i++) {
    sumaDiagonales[i] = diagonalPrincipal[i] + diagonalSecundaria[i];
  }
}

void escribirArreglo(int arreglo[]) {
  cout << "[";
  for (int i = 0; i < tamano; i++) {
    cout << arreglo[i] << " ";
  }
  cout << "]" << endl;
}

void escribirMatriz(int arreglo[][tamano]) {
  for (int i = 0; i < tamano; i++) {
    for (int j = 0; j < tamano; j++) {
      cout << setw(5) << arreglo[i][j] << setw(5);
    }
    cout << endl;
  }
  cout << endl;
}

int main() {
  srand(time(0));
  int matriz[tamano][tamano];
  int diagonalPrincipal[tamano], diagonalSecundaria[tamano],
      sumaDiagonales[tamano];
  generarMatrizAleatoria(matriz);
  cout << "Generando matriz de 5x5 con valores aleatorios (0-50):\n";
  escribirMatriz(matriz);
  obtenerDiagonalPrincipal(matriz, diagonalPrincipal);
  obtenerDiagonalSecundaria(matriz, diagonalSecundaria);
  sumarDiagonales(diagonalPrincipal, diagonalSecundaria, sumaDiagonales);
  cout << "Diagonal principal: ";
  escribirArreglo(diagonalPrincipal);
  cout << "Diagonal secundaria: ";
  escribirArreglo(diagonalSecundaria);
  cout << "Suma de diagonales: ";
  escribirArreglo(sumaDiagonales);

  return 0;
}
