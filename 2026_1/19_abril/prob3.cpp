#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(0));
  int aleatorio = random() % 101;
  int contador = 0;
  int entrada;
  bool adivinado = false;
  cout << aleatorio << endl;
  cout << "Ingrese un numero de 0 a 100" << endl;
  cin >> entrada;
  // Intento 1
  if (entrada == aleatorio) {
    cout << "Adivino el número correctamente.\n";
    adivinado = true;
  } else {
    if (entrada < aleatorio) {
      cout << "El número generado es menor. Intente nuevamente\n";
    } else {
      cout << "El número generado es mayor. Intente nuevamente\n";
    }
  }
  contador++;
  if (!adivinado) {
    cout << "Ingrese un numero de 0 a 100" << endl;
    cin >> entrada;
    if (entrada == aleatorio) {
      cout << "Adivino el número correctamente.\n";
      adivinado = true;
    } else {
      if (entrada < aleatorio) {
        cout << "El número generado es menor. Intente nuevamente\n";
      } else {
        cout << "El número generado es mayor. Intente nuevamente\n";
      }
    }
    contador++;
  }
  if (!adivinado) {
    cout << "Ingrese un numero de 0 a 100" << endl;
    cin >> entrada;
    if (entrada == aleatorio) {
      cout << "Adivino el número correctamente.\n";
      adivinado = true;
    } else {
      if (entrada < aleatorio) {
        cout << "El número generado es menor. Intente nuevamente\n";
      } else {
        cout << "El número generado es mayor. Intente nuevamente\n";
      }
    }
    contador++;
  }
  if (!adivinado) {
    cout << "Ingrese un numero de 0 a 100" << endl;
    cin >> entrada;
    if (entrada == aleatorio) {
      cout << "Adivino el número correctamente.\n";
      adivinado = true;
    } else {
      if (entrada < aleatorio) {
        cout << "El número generado es menor. Intente nuevamente\n";
      } else {
        cout << "El número generado es mayor. Intente nuevamente\n";
      }
    }
    contador++;
  }
  cout << "La cantidad de intentos fue: " << contador << endl;
  if (adivinado) {
    cout << "No adivino el número.\n";
  }

  return 0;
}
