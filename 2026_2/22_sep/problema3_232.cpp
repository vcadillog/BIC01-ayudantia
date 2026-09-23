#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int cantidadEntradas, sumaCuadrados = 0;

  cout << "Ingrese la cantidad de números que quiere sumar: ";
  cin >> cantidadEntradas;
  for (int i = 0; i < cantidadEntradas; i++) {
    int numero;
    cout << "Ingrese el número par: ";
    cin >> numero;
    if (numero % 2 == 0) {
      sumaCuadrados = sumaCuadrados + numero * numero;
    }
  }
  cout << "La suma de cuadrado de los pares es: " << sumaCuadrados << endl;

  return 0;
}
