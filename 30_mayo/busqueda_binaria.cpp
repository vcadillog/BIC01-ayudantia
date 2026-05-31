#include <iostream>

using namespace std;
// busqueda lineal
// busqueda binaria
// ordenamiento burbuja

int main() {
  int a[] = {7, 8, 9, 2, 6, 3, 4, 1};
  int N = sizeof(a) / sizeof(a[0]);
  int x;
  cout << "Ingrese el elemento a buscar: ";
  cin >> x;
  // busqueda lineal
  bool encontrado = false;
  for (int i = 0; i < N; i++) {
    if (a[i] == x) {
      cout << i << endl;
      encontrado = true;
      break;
    }
  }
  if (encontrado) {
    cout << "Se encontró el elemento: " << x;
    cout << endl;
  } else {
    cout << "No se encontró\n";
  }
  // busqueda binaria
  //  rango menor y mayor
  //  medio = menor + (mayor-menor)/2
  //  (mayor + menor)/2 != menor + (mayor-menor)/2 no siempre se cumple porque
  //  se trabaja con enteros
  //
  //  menor = 5
  //  mayor = 9
  //  (mayor-menor)/2 = 2
  //  medio = 5+2 = 7
  //  valor: -5, -2 , 0, 1, 2, 4, 5, 6, 7, 10
  //  indice: 0,  1 , 2, 3, 4, 5, 6, 7, 8, 9
  //  buscar -2
  //  menor = 0 (-5)
  //  mayor = 9 (10)
  //  medio = 0 + (9-0)/2 = 4
  //  a[4] = 2 == -2? Falso
  //  -2 es mayor o menor a 2? Menor
  //  menor = 0
  //  mayor = 3
  //  medio = 1
  //  -2 == -2 Verdadero, para
  //  Buscar 0
  //  -2 == 0 Falso -2 < 0
  //  menor = 2
  //  mayor = 3
  //  medio = 2 + (3-2)/2 = 2
  //  a[2] = 0 == 0 V , para

  // valor: -5, -2 , 0, 1, 2, 4, 5, 6, 7, 10
  int b[] = {-5, -2, 0, 1, 2, 4, 5, 6, 7, 10};
  int M = sizeof(b) / sizeof(b[0]);
  int buscado = 1;
  int menor = 0;
  int mayor = M - 1;
  // busco 3
  encontrado = false;
  // ascendente , invertir el mayor/menor en los if para busqueda en arreglo descendente
  while (menor <= mayor) {
    int medio = menor + (mayor - menor) / 2;
    if (b[medio] > buscado) {
      mayor = medio - 1;
    } else if (b[medio] < buscado) {
      menor = medio + 1;
    } else {
      encontrado = true;
      break;
    }
    //cout <<medio<< " "<<mayor<< " "<< menor<<endl;
  }

  cout << "Busqueda binaria: \n";
  if (encontrado) {
    cout << "Se encontró el elemento: " << buscado;
    cout << endl;
  } else {
    cout << "No se encontró\n";
  }

  return 0;
}
