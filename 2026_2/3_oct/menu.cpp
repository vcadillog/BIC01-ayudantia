#include <iostream>

using namespace std;

int main() {
  // para ingresar dos numeros
  // 1: para sumar los numeros
  // 2: para restar los numeros
  // 3: para multiplicar los numeros
  // 4: para detener el programa
  double numero1, numero2, resultado;
  int menu;
  bool continuarProgama = true;
  cout << "Ingrese el primer numero: ";
  cin >> numero1;
  cout << "Ingrese el segundo numero: ";
  cin >> numero2;
  do {
    cout << "Ingrese: \n";
    cout << "1: para sumar\n";
    cout << "2: para restar\n";
    cout << "3: para multiplicar\n";
    cout << "4: para terminar el programa\n";
    cin >> menu;
    switch (menu) {
    case 1: {
      resultado = numero1 + numero2;
      break;
    }
    case 2: {
      resultado = numero1 - numero2;
      break;
    }
    case 3: {
      resultado = numero1 * numero2;
      break;
    }
    case 4: {
      continuarProgama = false;
      cout << "Terminando el programa.\n";
      break;
    }
    default: {
      cout << "Opción inválida, intenta nuevamente.\n";
      break;
    }
    }
    if (menu >= 1 and menu <= 3) {
      cout << "El resultado de la operación es: " << resultado << endl;
    }
  } while (continuarProgama);
  return 0;
}
