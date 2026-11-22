#include <cstdlib>
#include <iostream>

using namespace std;

int ingresarDatos() {
  int tamano;
  do {
    cout << "Ingrese el valor de n: ";
    cin >> tamano;
    if (tamano > 2 and tamano % 2 != 0) {
      break;
    } else {
      cout << "El valor tiene que ser mayor a 2 e impar\n";
    }
  } while (true);
  return tamano;
}

void generarNumeroAleatorio(int arreglo[], int tamano) {
  for (int i = 0; i < tamano; i++) {
    arreglo[i] = random() % 6;
  }
}

bool determinarNumeroCapicua(int arreglo[], int tamano) {
  bool esCapicua = true;
  for (int i = 0; i < tamano / 2; i++) {
    if (arreglo[i] != arreglo[tamano - i - 1]) {
      esCapicua = false;
      break;
    }
  }
  return esCapicua;
}

int generaCapicua(int tamano, int arreglo[]) {
  bool esCapicua;
  int contador = 0;
  do {
    generarNumeroAleatorio(arreglo, tamano);
    esCapicua = determinarNumeroCapicua(arreglo, tamano);
    contador++;
  } while (!esCapicua);
  return contador;
}

void escribirArrego(int arreglo[], int tamano) {
  // Forma incorrecta de obtener el tamano de una función, se debe obtener en el
  // ambito donde fue definido
  // int n = sizeof(arreglo) / sizeof(arreglo[0]);
  // cout << n << endl;
  // Retorna algo indeterminado
  for (int i = 0; i < tamano; i++) {
    cout << arreglo[i] << " - ";
  }
  cout << endl;
}
void problema1();

int main() {
  srand(time(0));

  int tamano = ingresarDatos();

  int arreglo[tamano];
  int contador = generaCapicua(tamano, arreglo);
  cout << tamano << endl;

  cout << "Veces ==>: " << contador << endl;
  escribirArrego(arreglo, tamano);
  // Escribir un numero aleatorio
  problema1();
  return 0;
}

void problema1() {
  int tamano = ingresarDatos();
  int arreglo[tamano];
  generarNumeroAleatorio(arreglo, tamano);
  escribirArrego(arreglo, tamano);
}
