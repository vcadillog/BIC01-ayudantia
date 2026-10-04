#include <iostream>

using namespace std;

int main() {
  int numero;
  bool esPrimo = true;
  cout << "Ingrese un número: ";
  cin >> numero;
  if (numero >= 2) {
    for (int i = 2; i < numero; i++) {
      if (numero % i == 0) {
        esPrimo = false;
        break;
      }
    }
  } else {
    cout << "Ingrese un número mayor a 1\n";
  }

  if (esPrimo) {
    cout << "El número es primo\n";
  } else {
    cout << "El número no es primo\n";
  }
  // numero 7
  // i=2 ,7%2 = 1
  // i=3, 7%3 = 1
  // numero = 9
  // i=2 , 9%2 = 1
  // i=3, 9%3 = 0
  //
  int contadorPrimos = 0;
  if (numero >= 2) {
    for (int i = 2; i <= numero; i++) {
      if (numero % i == 0) {
        contadorPrimos++;
        cout << i << " es divisor de " << numero <<"\n";
      }
    }
  }
  return 0;
}
// como determino un primo
