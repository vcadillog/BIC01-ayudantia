#include <iostream>

using namespace std;

int main() {
  int A, B, C;
  int mayor, sumaDosMenores;
  cout << "Ingrese el numero A: ";
  cin >> A;
  cout << "Ingrese el numero B: ";
  cin >> B;
  cout << "Ingrese el numero C: ";
  cin >> C;
  if (A < B) {
    mayor = B;
  } else {
    mayor = A;
  }
  if (A < C) {
    mayor = C;
  } else {
    mayor = A;
  }
  if (B < C) {
    mayor = C;
  } else {
    mayor = B;
  }
  sumaDosMenores = A + B + C - mayor;
  if (sumaDosMenores > mayor) {
    cout << "La suma de los dos menores superan al mayor\n";
  } else {
    cout << "El número mayor es: " << mayor << endl;
  }
  return 0;
}
