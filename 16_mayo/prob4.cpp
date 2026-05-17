#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int menu;
  int num=0;
  do {
    cout << "-----MENÚ----\n";
    cout << "1. Registrar número\n";
    cout << "2. Mostrar número en otra base\n";
    cout << "3. Salir\n";
    cout << "Ingrese opción\n";
    cin >> menu;
    switch (menu) {
    case 1: {
      do {
        cout << "Ingrese un número entero positivo en base decimal: ";
        cin >> num;
        if (num <= 0) {
          cout << "El número es incorrecto, intente nuevamente\n";
        }
      } while (num <= 0);
      break;
    }
    case 2: {
      int base;
      if (num == 0){
          cout << "No se ha ingresado un número, intente nuevamente\n";
          break;
      }
      do {
        cout << "Ingrese la base de destino entre 2 y 9: ";
        cin >> base;
        if (base > 9 or base < 2) {
          cout << "La base es incorrecta, intente nuevamente\n";
        }
      } while (base > 9 or base < 2);
      // transformar a otra base
      int n = 0, i = 0;
      while (num > 0) {
        int resto = num % base;
        num = num / base;
        i = resto * pow(10, n) + i;
        n++;
      }
      cout << i << endl;
      break;
    }
    case 3: {
      cout << "Saliendo del programa\n";
      break;
    }
    default: {
      cout << "Opción inválida\n";
      break;
    }
    }
  } while (menu != 3);
  return 0;
}
