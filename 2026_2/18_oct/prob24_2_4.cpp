#include <iostream>

using namespace std;

int main() {
  const int TEMPERATURA_OBJETIVO = 20;
  for (int t = 0; t <= 24; t++) {
    int temperatura;
    if ((t >= 0 and t <= 8) or (t >= 19)) {
      cout << "Ahorro de energia - Estufa APAGADA a las " << t << " horas\n";
    } else {
      cout << "Ingrese la T.Ambiental a las " << t << endl;
      cin >> temperatura;
      if (temperatura < TEMPERATURA_OBJETIVO) {
        cout << "La estufa esta ENCENDIDA\n";
      } else {
        cout << "La estufa esta APAGADA\n";
      }
    }
  }
  return 0;
}
