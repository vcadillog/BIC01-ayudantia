#include <ctime>
#include <iostream>
#include <random>

using namespace std;

int main() {
  srand(time(0));
  int N;
  cout << "Ingrese un número impar mayor a 2: ";
  cin >> N;
  if (N > 2 and N % 2 == 1) {
    int a[N];
    bool esCapicua;
    int counter = 0;
    // 1. Genero un arreglo
    // 2. Determino si el arreglo es capicua o no
    // 3. Si el arreglo generado es capicua, se detiene
    // 4. Sino, continua desde el paso 1
    do {
      // Se llena el arreglo aleatorio
      for (int i = 0; i < N; i++) {
        a[i] = random() % 6;
      }
      // Determinar un arreglo capicua: ej. 103252301 N=9 recorrer N/2
      // i = 0 , 8=9-1
      // i = 1 , 7=9-1-1
      // ... i = 3 , 5=9-3-1
      // 12345
      esCapicua = true;
      for (int i = 0; i < N / 2; i++) {
        if (a[i] != a[N - i - 1]) {
          esCapicua = false;
          break;
        }
      }
      counter++;
    } while (!esCapicua);
    cout << "El número de generaciones para generar el número capicúa fue de: "
         << counter << endl;
    for (int i = 0; i < N; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  } else {
    cout << "El número ingresado es incorrecto\n";
  }
  return 0;
}
