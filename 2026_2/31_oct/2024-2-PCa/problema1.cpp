#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  srand(time(0));

  int tamano, contador = 0;
  do {
    cout << "Ingrese el valor de n: ";
    cin >> tamano;
    if (tamano > 2 and tamano % 2 != 0) {
      break;
    } else {
      cout << "El valor tiene que ser mayor a 2 e impar\n";
    }
  } while (true);
  bool esCapicua;
  int arreglo[tamano];
  do {
    esCapicua = true;
    for (int i = 0; i < tamano; i++) {
      arreglo[i] = random() % 6;
    }
    for (int i = 0; i < tamano / 2; i++) {
      if (arreglo[i] != arreglo[tamano - i - 1]) {
        esCapicua = false;
        break;
      }
    }
    contador++;
  } while (!esCapicua);
  cout << "Veces ==>: " << contador << endl;
  for (int i = 0; i < tamano; i++) {
    cout << arreglo[i] << " - ";
  }
  cout << endl;
  return 0;
}
