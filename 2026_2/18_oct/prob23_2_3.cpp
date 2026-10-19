#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(0));
  int dado_1, dado_2, dado_3, apuesta, credito = 30;
  bool continuarApostando = true;

  do {
    bool apuestaIngresadaCorrectamente;
    do {
      apuestaIngresadaCorrectamente = true;
      cout << "Tienes " << credito << " créditos. Ingresa tu apuesta (1-10): ";
      cin >> apuesta;
      if (apuesta > credito) {
        cout << "No puedes apostar más de lo que tienes\n";
        apuestaIngresadaCorrectamente = false;
      } else if (apuesta > 10 or apuesta < 1) {
        cout << "Solo se puede apostar en un rango de 1-10\n";
        apuestaIngresadaCorrectamente = false;
      }
    } while (!apuestaIngresadaCorrectamente);

    credito -= apuesta;
    dado_1 = random() % 6 + 1;
    dado_2 = random() % 6 + 1;
    dado_3 = random() % 6 + 1;
    cout << "Resultados de los dados: " << dado_1 << " - " << dado_2 << " - "
         << dado_3 << endl;
    int resultadoApuesta;
    if (dado_1 == dado_2 and dado_2 == dado_3) {
      resultadoApuesta = 3 * apuesta;
      credito += resultadoApuesta;
      cout << "Has ganado " << resultadoApuesta << " créditos!\n";
    } else if (dado_1 == dado_2 or dado_1 == dado_3 or dado_2 == dado_3) {
      resultadoApuesta = 2 * apuesta;
      credito += resultadoApuesta;
      cout << "Has ganado " << resultadoApuesta << " créditos!\n";
    } else {
      cout << "Esta vez, no has ganado.\n";
    }
    // CONTROLAR OPCIONES COHERENTES
    bool opcionCorrecta = false;
    do {
      char opcionContinuar;
      cout << "¿Quieres intentarlo otra vez? (y/n):";
      cin >> opcionContinuar;
      if (opcionContinuar == 'n') {
        continuarApostando = false;
        opcionCorrecta = true;
      } else if (opcionContinuar == 'y') {
        opcionCorrecta = true;
      } else {
        cout << "El valor ingresado es incorrecto. Intente nuevamente.\n";
      }
    } while (!opcionCorrecta);
    // CONTROLAR OPCIONES COHERENTES
  } while (continuarApostando and credito > 0);
  cout << "Gracias por jugar!\n";

  return 0;
}
