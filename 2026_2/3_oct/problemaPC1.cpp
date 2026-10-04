#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(0));
  int numero1, numero2, numero3, maximo, maximoIntermedio, minimo;
  numero1 = random() % 10 + 1;
  numero2 = random() % 10 + 1;
  numero3 = random() % 10 + 1;
  cout << "Numero 1: " << numero1 << endl;
  cout << "Numero 2: " << numero2 << endl;
  cout << "Numero 3: " << numero3 << endl;

  if (numero1 < numero2) {
    maximoIntermedio = numero2;
    minimo = numero1;
  } else {
    maximoIntermedio = numero1;
    minimo = numero2;
  }

  if (maximoIntermedio > numero3) {
    maximo = maximoIntermedio;
    if (numero3 < minimo) {
      minimo = numero3;
    }
  } else {
    maximo = numero3;
  }
  int central = numero1 + numero2 + numero3 - maximo - minimo;
  int resultado = central + minimo;
  if (maximo < resultado) {
      cout << "El maximo es menor a la suma de los 2 menor y su suma es: "<<resultado<<endl;
  }
  else{
      cout << "El máximo es: " <<maximo<<endl;
  }

  return 0;
}
