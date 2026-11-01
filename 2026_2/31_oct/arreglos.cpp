#include <iostream>

using namespace std;

int main() {
  int arreglo[5] = {1, 2, 3, 4, 5};
  // int = 4 bytes
  int bytesArreglo = sizeof(arreglo);
  int bytesTipo = sizeof(arreglo[0]);
  int tamanoArreglo = bytesArreglo / bytesTipo;
  cout << "bytesArreglo" << " " << "bytesTipo" << " " << "tamanoArreglo\n";
  cout << bytesArreglo << " " << bytesTipo << " " << tamanoArreglo << endl;
  cout << "Conteo Ascendente\n";
  for (int i = 0; i < tamanoArreglo; i++) {
    cout << arreglo[i] << endl;
  }

  cout << "Conteo Descendente\n";
  for (int i = tamanoArreglo - 1; i >= 0; i--) {
    cout << arreglo[i] << endl;
  }
  cout << "Acceso a un espacio de memoria fuera de rango, que almacena datos "
          "desconocidos:";
  cout << arreglo[100] << endl;
  cout << "Puntero: " << arreglo << endl;
  cout << "Puntero: " << arreglo+1 << endl;
  cout << "Valor que apunta el puntero: " << *(arreglo+1) << endl;

  const int columnas = 2;
  int matriz[5][columnas] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << matriz[0] << endl;
  cout << matriz[1] << endl;
  cout << *matriz[3] << endl;

  int bytesMatriz = sizeof(matriz);
  int bytesTipoMatriz = sizeof(matriz[0][0]);
  int tamanoMatriz = bytesMatriz / bytesTipo; //10
  int filas = tamanoMatriz/columnas;
  cout << "bytesMatriz" << " " << "bytesTipo" << " " << "tamanoMatriz\n";
  cout << bytesMatriz << " " << bytesTipoMatriz << " " << tamanoMatriz << endl;
  cout << "filas: "<<filas<<endl;

  return 0;
}
