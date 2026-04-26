#include <iostream>

using namespace std;

int main() {
  int edad;
  double promedio;
  int beca;
  // bloque 1
  cout << "Ingrese la edad: ";
  cin >> edad;
  cout << "Ingrese el promedio: ";
  cin >> promedio;
  // Forma 1
  if (edad > 18) {
    if (promedio > 20 or promedio < 0) {
      cout
          << "El promedio es invalido, tiene que estar en el rango de 0 a 20\n";
    } else if (promedio >= 18) {
      beca = 2000;
    } else if (promedio >= 15) {
      beca = 1000;
    } else {
      cout << "Enviar carta de motivacion\n";
    }
  }
  // bloque 2
  else if (edad <= 18 and edad >= 0) {
    if (promedio > 20 or promedio < 0) {
      cout
          << "El promedio es invalido, tiene que estar en el rango de 0 a 20\n";
    } else if (promedio >= 18) {
      beca = 3000;
    } else if (promedio >= 16) {
      beca = 2000;
    } else {
      cout << "Enviar carta de motivacion\n";
    }
  }
  // bloque 3
  else {
    cout << "La edad no puede ser negativa\n";
  }
  // Forma 2
  if ((promedio > 20 || promedio < 0) || (edad < 0 || edad > 80)) {
    cout << "El promedio es invalido, tiene que estar en el rango de 0 a 20 o "
            "la edad es invalida, el rango debe ser de 0 a 80\n";
  } else {
    if (edad > 18) {
      if (promedio >= 18) {
        beca = 2000;
        cout << "La beca es: "<<beca<<endl;
      } else if (promedio >= 15) {
        beca = 1000;
        cout << "La beca es: "<<beca<<endl;
      } else {
        cout << "Enviar carta de motivacion\n";
      }
    }
    // bloque 2
    else {
      if (promedio >= 18) {
        beca = 3000;
        cout << "La beca es: "<<beca<<endl;
      } else if (promedio >= 16) {
        beca = 2000;
        cout << "La beca es: "<<beca<<"\n";
      } else {
        cout << "Enviar carta de motivacion"<<endl;
      }
    }
  }
  return 0;
}
