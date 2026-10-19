#include <iostream>

using namespace std;

int main() {
  int sueldo;
  double impuesto = 0, descuento;
  cout << "Ingrese su ingreso anual: ";
  cin >> sueldo;
  // 75000
  if (sueldo >= 30001) {
    impuesto += 2000;
    if (sueldo >= 60000) {
      impuesto += 4500;
      impuesto += (sueldo - 60000) * .2;
    } else {
      impuesto = (sueldo - 30000) * .1;
    }
  } else {
    impuesto = (sueldo - 10000) * .1;
  }
  if (sueldo >= 50000 and sueldo <= 100000) {
    descuento = 0.05 * impuesto;
  } else if (sueldo > 100000) {
    descuento = 0.1 * impuesto;
  }
  double impuestoFinal = impuesto - descuento;
  cout << "El impuesto total a pagar antes del descuento es: " << impuesto
       << endl;
  cout << "El descuento aplicado es: " << descuento << endl;
  cout << "El impuesto total a pagar después del descuento es: "
       << impuestoFinal << endl;

  return 0;
}
