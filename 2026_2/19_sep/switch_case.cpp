#include <iostream>

using namespace std;

int main() {
  int nota;
  bool aprobado, esValido = true;
  char notaLiteral, caracterExtra = ' '; // caracterExtra : + , ''

  cout << "Ingrese la nota del estudiante: ";
  cin >> nota;
  // A+: 100-90,
  // A: 89-70,
  // B: 69-50,
  // C: 49-30,
  // D: 29-20,
  // E: 19-0
  switch (nota) {
  case 90 ... 100: {
    notaLiteral = 'A';
    caracterExtra = '+';
    aprobado = true;
    break;
  }
  case 70 ... 89: {
    notaLiteral = 'A';
    aprobado = true;
    break;
  }
  case 50 ... 69: {
    notaLiteral = 'B';
    aprobado = true;
    break;
  }
  case 30 ... 49: {
    notaLiteral = 'C';
    aprobado = false;
    break;
  }
  case 20 ... 29: {
    notaLiteral = 'D';
    aprobado = false;
    break;
  }
  case 0 ... 19: {
    notaLiteral = 'E';
    aprobado = false;
    break;
  }
  default: {
    cout << "Error, nota fuera de rango\n";
    esValido = false;
    break;
  }
  }
  if (esValido) {
    cout << "La nota es : " << nota << " , la nota literal es: " << notaLiteral
         << caracterExtra << ", el estudiante fue ";
    if (aprobado) {
      cout << "aprobado \n";
    } else {
      cout << "desaprobado \n";
    }
  }
  return 0;
}
