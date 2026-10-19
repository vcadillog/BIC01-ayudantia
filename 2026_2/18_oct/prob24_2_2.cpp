#include <cmath>
#include <iostream>

using namespace std;

int main() {
  const int TOLERANCIA = pow(10, -7);
  // tn = (-1)^(n-1)(x^2*n-1)/(2*n-1)
  double x, arctanAproximacion, arctanExacto, error;
  int contador = 1;
  cout << "Ingrese el valor de x (|x| <= 1):";
  cin >> x;
  if (abs(x) <= 1) {
    arctanExacto = atan(x);
    do {
      int k = 2 * contador - 1;
      arctanAproximacion += pow(-1, contador - 1) * pow(x, k) / k;
      error = abs(arctanExacto - arctanAproximacion);
      contador++;
    } while (error >= TOLERANCIA);
    cout << "El valor aproximado de de arctan(" << x << ") es:" << arctanAproximacion
         << endl;
  } else {
    cout << "El valor ingresado está fuera de rango\n";
  }
  return 0;
}
