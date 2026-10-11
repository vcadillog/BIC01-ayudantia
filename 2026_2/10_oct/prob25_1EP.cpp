#include <iostream>

using namespace std;

int main() {
  int cantidadDatos, datoSignoAnterior, datoAnterior, cambioSigno = 0;
  int contadorIguales = 1, contadorSubgrupos = 0;
  do {
    int dato;
    cout << "Ingrese una cantidad de datos (5-30):";
    cin >> cantidadDatos;
    if (cantidadDatos >= 5 and cantidadDatos <= 30) {
      // Logica de la lectura de datos
      for (int i = 1; i <= cantidadDatos; i++) {
        cout << "Ingrese dato " << i << ":";
        cin >> dato;
        int datoSignoNormalizado;
        if (dato == 0) {
          datoSignoNormalizado = dato + 1;
        } else {
          datoSignoNormalizado = dato;
        }
        if (i == 1) {
          datoSignoAnterior = datoSignoNormalizado;
        }
        if (i > 1) {
          // LOGICA PARA DETECTAR CAMBIO DE SIGNO
          if (datoSignoNormalizado * datoSignoAnterior <
              0) { // >= 0 (no cambia), <0 (cambio)
            cambioSigno++;
            // cout << cambioSigno << " " << datoSignoAnterior << endl;
          }
          // LOGICA PARA DETECTAR CAMBIO DE SIGNO
          //
          // LOGICA PARA DETECTAR SUBGRUPOS IGUALES DE TAMAÑO 3+
          if (dato == datoAnterior) {
            contadorIguales++;
            if (contadorIguales == 3) {
              contadorSubgrupos++;
            }
          } else {
            contadorIguales = 1;
          }
          // LOGICA PARA DETECTAR SUBGRUPOS IGUALES DE TAMAÑO 3+
        }
        datoSignoAnterior = datoSignoNormalizado;
        datoAnterior = dato;
      }
      // Logica de la lectura de datos
      break;
    } else {
      cout << "Cantidad inválida. Intente nuevamente\n";
    }
  } while (true);

  cout << "Cambios de signo detectados:" << cambioSigno << endl;
  cout << "Subgrupos de al menos 3 repeticiones:" << contadorSubgrupos << endl;

  return 0;
}
