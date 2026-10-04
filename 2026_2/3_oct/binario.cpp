#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int numero, division, numeroBinario = 0;
  int base = 2;
  cout << "Ingrese número: ";
  cin >> numero;
  division = numero;
  int i = 0;
  while (division > 0) {
    int resto = division % base;
    division = division / base;
    numeroBinario += resto * pow(10, i);
    i++;
  }
  cout << "El número binario es: " << numeroBinario << endl;
  return 0;
}

// 6
// 6%2 = 0 ... 0
// 6/2 = 3
// 3%2 = 1 ... 1
// 3/2 = 1
// 1%2 = 1 ... 1
// 1/2 = 0 ... Fin
//
// 011
// 0*10^0 + 1*10^1 + 1*10^2
