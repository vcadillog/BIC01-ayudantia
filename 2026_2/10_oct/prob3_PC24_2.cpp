#include <iostream>

using namespace std;

int main() {
  int numero, suma = 0, digito, division;
  cout << "Ingrese un número entero positivo: ";
  cin >> numero;
  division = numero;

  while (division > 0) {
    digito = division % 10;
    division = division / 10;
    suma += digito * digito;
  }
  cout << "La suma de los cuadrados de los digitos es: " << suma << endl;
  return 0;
}
// 123 -> 1 2 3
//
// 123%10 -> 3
// 123/10 -> 12
//
//  12%10 -> 2
//  12/10 -> 1
//
//  1%10 -> 1
//  1/10 -> 0
