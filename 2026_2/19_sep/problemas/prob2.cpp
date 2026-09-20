#include <iostream>

#include <cmath> // funciones matematicas
// Números aleatorios
#include <ctime>
#include <random>

using namespace std;

int main() {
  srand(time(0));
  // numero en el rango de 0-99
  int aleatorio = random() % 100 + 1;
  // 51-200
  int aleatorio2 = random() % 150 + 51;
  cout << aleatorio << " " << aleatorio2 << endl;

  int opcionMenu = 0;
  cout << "Opción 1 para área de cuadrado.\n";
  cout << "Opción 2 para área de círculo.\n";
  cout << "Opción 3 para seno de un ángulo.\n";
  cout << "Ingrese la opción: ";
  cin >> opcionMenu;
  if (opcionMenu == 1) {
    // En el rango de 1 a 10
    double lado = random() % 10 + 1;
    // double area = lado*lado;
    double area = pow(lado, 2);
    cout << "El lado es: " << lado << " área es: " << area << endl;

  } else if (opcionMenu == 2) {
    double PI = 3.1415;
    // En el rango de 100-199
    double radio = random() % 100 + 100;
    // double area = lado*lado;
    double area = pow(radio, 2) * PI;
    cout << "El radio es: " << radio << "área es: " << area << endl;
  } else if (opcionMenu == 3) {
    double angulo;
    cout << "Ingrese el ángulo en radianes: ";
    cin >> angulo;
    double seno = sin(angulo);
   
    cout << "El seno es: " << seno << endl;

  } else {
    cout << "No es una opción válida, terminando el programa\n";
  }

  // numero1 = 3, numero2 = -8
  // esperado = -5

  return 0;
}
