#include <iostream>

using namespace std;

int main() {
  int opcionMenu=0;
  double numero1, numero2;
  cout << "Ingrese el primer número: ";
  cin >> numero1;
  cout << "Ingrese el segundo número: ";
  cin >> numero2;
  cout << "Opción 1 para sumar.\n";
  cout << "Opción 2 para multiplicar.\n";
  cout << "Ingrese la opción: ";
  cin >> opcionMenu;
  // Forma 1:
  /*
  if (opcionMenu > 2 or opcionMenu < 1){
      cout << "No es una opción válida, terminando el programa\n";
  }
  else if (opcionMenu==1){
      double suma = numero1 + numero2;
      cout << "La suma de los números es: "<<suma<<endl;
  }
  else {
      double multiplicacion = numero1 * numero2;
      cout << "La multiplicación de los números es: "<<multiplicacion<<endl;
  }
  */
  // Forma 2:
  if (opcionMenu==1){
      double suma = numero1 + numero2;
      cout << "La suma de los números es: "<<suma<<endl;
  }
  else if (opcionMenu==2){
      double multiplicacion = numero1 * numero2;
      cout << "La multiplicación de los números es: "<<multiplicacion<<endl;
  }
  else {
      cout << "No es una opción válida, terminando el programa\n";
  }

  // numero1 = 3, numero2 = -8
  // esperado = -5

  return 0;
}
