#include <iostream>

using namespace std;

int main() {
  string frase = "Introduccion a la computacion";
  // string salidaArray = "computacion la a Introduccion";
  bool finalizado = false;

  int i = 0;
  string salidaArray[100];
  while (!finalizado) {
    int idx = frase.find(" ");
    if (idx != -1) {
      salidaArray[i] = frase.substr(0, idx);
      frase = frase.substr(idx + 1);
      i++;

    } else {
      finalizado = true;
    }
  }
  salidaArray[i] = frase;
  i++;
  for (int j = i - 1; j >= 0; j--) {
    if (j != 0) {
      cout << salidaArray[j] << " ";
    } else {
      cout << salidaArray[j] << endl;
    }
  }
  return 0;
}

// INVIERTE UNA FRASE POR PALABRA
