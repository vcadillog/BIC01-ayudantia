#include <iostream>

using namespace std;

int main() {
  int entero;
  double real = 4.5;
  entero = real; // 4
  cout << "Numero entero: " << entero << endl;
  real = 4.6; // 4
  entero = real;
  cout << "Numero entero: " << entero << endl;
  bool logico = true;
  entero = logico; // 1
  cout << "Numero entero: " << entero << endl;
  logico = false; // 0
  entero = logico;
  cout << "Numero entero: " << entero << endl;
  char letra = 'x';
  entero = letra;
  cout << "Numero entero: " << entero << endl;
  letra = letra + 1;
  entero = letra;
  cout << "Numero entero: " << entero << " Letra: " << letra<< endl;

  char variable; // Siempre se debe definir el valor de una variable antes de usarla
  cout << "Numero es: "<<variable<<endl;

  return 0;
}
