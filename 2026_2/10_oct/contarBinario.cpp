#include <cmath>
#include <iostream>

using namespace std;

int main() {

  int numero, division, numeroBinario;
  int base = 2;
  do {
    numeroBinario = 0;
    int contador_0 = 0, contador_1 = 0;
    cout << "Ingrese un número entero(negativo para salir): ";
    cin >> numero;
    if (numero < 0) {
      cout << "Saliendo del programa...\n";
      break;
    }
    // CAMBIO DE BASE
    division = numero;
    int i = 0;
    while (division > 0) {
      int resto = division % base;
      division = division / base;
      numeroBinario += resto * pow(10, i);
      if (resto == 0) {
        contador_0++;
      } else if (resto == 1) {
        contador_1++;
      }
      i++;
    }
    // CAMBIO DE BASE
    cout << "El número " << numero << "en binario tiene: " << numeroBinario
         << endl;
    cout << "Cantidad de 0's: " << contador_0 << endl;
    cout << "Cantidad de 1's: " << contador_1 << endl;
  } while (true);
  return 0;
}
