#include <iostream>

using namespace std;

int main() {
  double saldo = 1000;
  int menu;
  bool enEjecucion = true;
  do {
    cout << "Ingrese opcion de menu\n1. Depositar \n2. Retirar \n3. Ver Saldo\n"
            "4. Salir\n";
    cin >> menu;
    switch (menu) {
    case 1: {
      double deposito;
      cout << "Depositar: S/.";
      cin >> deposito;
      if (deposito < 0) {
        cout << "Ingrese un número positivo.\n";
      } else {
        saldo = saldo + deposito;
      }
      break;
    }
    case 2: {
      double retiro;
      cout << "Retirar: S/.";
      cin >> retiro;
      if (retiro < 0) {
        cout << "Ingrese un número positivo.\n";
      } else if (retiro > saldo) {
        cout << "No tiene saldo suficiente\n";
      } else {
        saldo = saldo - retiro;
      }
      break;
    }
    case 3: {
      cout << "Saldo: S/." << saldo << endl;
      break;
    }
    case 4: {
      enEjecucion = false;
      cout << "Se terminó el programa.\n";
      break;
    }
    default: {
      cout << "Opción inválida, intente nuevamente.\n";
      break;
    }
    }
  } while (enEjecucion);

  return 0;
}
