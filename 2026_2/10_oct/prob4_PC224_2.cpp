#include <iostream>

using namespace std;

int main() {
  double nivelContaminacion, contaminacionPromedio = 0;
  int contadorDatos = 0;
  bool continuarPrograma = true;
  do {
    do {
      cout << "Ingresa el nivel de contaminación del aire (ug/m│):";
      cin >> nivelContaminacion;
      if (nivelContaminacion >= 0) {
        break;
      } else {
        cout << "Los datos ingresados no pueden ser negativos. Intente "
                "nuevamente.\n";
      }
    } while (true);
    contaminacionPromedio += nivelContaminacion;
    contadorDatos++;

    char caracterContinuacion;
    do {
      cout << "Quieres ingresar otro nivel? (s/n):";
      cin >> caracterContinuacion;
      if (caracterContinuacion == 'n') {
        continuarPrograma = false;
        break;
      } else if (caracterContinuacion == 's') {
        break;
      } else {
        cout << "Opción incorrecta, intentente nuevamente\n";
      }

    } while (true);
  } while (continuarPrograma);
  contaminacionPromedio = contaminacionPromedio / contadorDatos;
  cout << "El nivel promedio de contaminación del aire es: "
       << contaminacionPromedio << " ug/m\n";
  cout << "Calidad del aire: ";
  if (contaminacionPromedio < 50) {
    cout << "Buena\n";
  } else if (contaminacionPromedio >= 50 and contaminacionPromedio <= 100) {
    cout << "Moderada\n";
  } else {
    cout << "Buena\n";
  }

  return 0;
}
