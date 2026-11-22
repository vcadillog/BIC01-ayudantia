#include <iostream>

using namespace std;
const int CELCIUS = 1;
const int KELVIN = 2;

float ingresarDatos() {
  float dato;
  cout << "Ingrese el dato: ";
  cin >> dato;
  return dato;
}

float celciusAKelvin(int temperatura) {
  temperatura = temperatura + 273;
  return temperatura;
}

void celciusAKelvinPorReferencia(int &temperatura) {
  temperatura = temperatura + 273;
}

void escribirTemperatura(int temperatura, int tipoTemperatura) {
  cout << "La temperatura es: " << temperatura;
  if (tipoTemperatura == CELCIUS) {
    cout << " grados celcius\n";
  } else if (tipoTemperatura == KELVIN) {
    cout << " kelvin\n";
  } else {
    cout << "error\n";
  }
}

int main() {
  int temperatura = ingresarDatos();
  // Funcion con argumento pasado por copia
  escribirTemperatura(temperatura, CELCIUS);
  cout << "Pase por copia:\n";
  int temperaturaKelvin = celciusAKelvin(temperatura);
  escribirTemperatura(temperaturaKelvin, KELVIN);

  cout << "Pase por referencia:\n";
  celciusAKelvinPorReferencia(temperatura);
  escribirTemperatura(temperatura, KELVIN);
  return 0;

}
