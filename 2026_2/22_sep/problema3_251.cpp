#include <iostream>

using namespace std;

int main() {
  int edad, costo;
  // int rango (2^32) -2,147,483,648 to 2,147,483,647
  // 0-3 bebes gratis
  // 4-12 5$
  // 13-64 15$
  // 65-120 8$
  // <-inf,0> o <120-inf> invalido

  cout << "Ingrese la edad: ";
  cin >> edad;
  switch (edad) {
  case 0 ... 3: {
    costo = 0;
    break;
  }
  case 4 ... 12: {
    costo = 5;
    break;
  }
  case 13 ... 64: {
    costo = 15;
    break;
  }
  case 65 ... 120: {
    costo = 8;
    break;
  }
  default: {
    costo = -1;
  }
  }

  if (costo > 0) {
    cout << "El precio de la entrada es: $" << costo << endl;
  } else if (costo == 0) {
    cout << "El precio de la entrada es Gratis" << endl;
  } else {
    cout << "La edad ingresada es incorrecta\n";
  }
  return 0;
}
