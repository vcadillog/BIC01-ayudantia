#include <iostream>

using namespace std;

int main() {
  int anio, resto1, resto2;
  cout << "Ingrese un año: ";
  cin >> anio;
  resto1 = anio % 4;
  resto2 = anio % 400;
  if (resto1 == 0 and resto2 != 0) {
    cout << anio << " es un año bisiesto\n";
  } else {
    cout << anio << " no es un año bisiesto\n";
  }

  return 0;
}
