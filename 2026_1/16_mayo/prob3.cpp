#include <iostream>

using namespace std;

int main() {
  int anual;
  double impuesto1 = 0, impuesto2 = 0, impuesto3 = 0;
  double exceso = 0;
  cout << "reporte tributario" << endl;
  cout << "ingreso anual" << endl;
  cin >> anual;

  if (anual <= 10000) {
    cout << "EXONERADO" << endl;
  }

  if (anual > 10000) {
    cout << "un 10% sobre el exceso de 10000" << endl;
    exceso = anual - 10000;
    if (exceso > 20000) {
      impuesto1 = 2000;
    } else {
      impuesto1 = exceso * 0.1;
    }
  }

  if (anual > 30000) {
    cout << "un 15% sobre el exceso de 30000" << endl;
    exceso = anual - 30000;
    if (exceso > 30000) {
      impuesto2 = 4500;
    } else {
      impuesto2 = exceso * 0.15;
    }
  }

  if (anual > 60000) {
    cout << "un 20% sobre el exceso de 60000" << endl;
    exceso = anual - 60000;
    impuesto3 = exceso * 0.2;
  }
  double impuesto = 0;
  impuesto = impuesto1 + impuesto2 + impuesto3;
  double descuento;

  if (anual >= 50000){
      descuento = 0.05*impuesto;
  }
  else if (anual >= 100000){
      descuento = 0.10*impuesto;
  }


  cout << "reporte tributario: " << endl;
  cout << "impuesto bruto: " << impuesto << endl;
  cout << "descuento: " << descuento << endl;
  impuesto = impuesto - descuento;
  cout << "impuesto final: " << impuesto << endl;

  return 0;
}
