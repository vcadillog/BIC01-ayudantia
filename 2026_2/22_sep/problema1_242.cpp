#include <iostream>

using namespace std;

int main() {
  int numero1, numero2, numero3;
  int central, minimo, maximo, maximoIntermedio;

  cout << "Ingrese nota 1: " ;
  cin >> numero1;
  cout << "Ingrese nota 2: " ;
  cin >> numero2;
  cout << "Ingrese nota 3: " ;
  cin >> numero3;

  if (numero1 < numero2){
      minimo = numero1;
      maximo = numero2;
  }
  else {
      minimo = numero2;
      maximo = numero1;
  }

  if (minimo < numero3){
      maximoIntermedio = numero3;
  }
  else {
      minimo = numero3;
      maximoIntermedio = numero1;
  }

  if (maximo < maximoIntermedio){
      maximo = maximoIntermedio;
  }
  central = numero1 + numero2 + numero3 - minimo - maximo;
  cout << "menor nota: " << minimo << " central nota: " << central << " mayor nota: " << maximo << endl;



  return 0;
}
