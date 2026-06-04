#include <iostream>

using namespace std;

int main() {
  int a[] = {850, 720, 610, 400, 500, 240, 310, 180, 120, 50};
  int N = sizeof(a) / sizeof(a[0]);
  int valor = 315;
  // Ordenamiento Burbuja
  //
  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        // swap
        swap(a[j], a[j + 1]); // -> a[j]=a[j+1], a[j+1]=a[j]
      }
    }
  }
  // 1. Ordenar el arreglo
  // 2. Ingresar distancia: valor
  // 3. min = abs(valor - a[i]) //incial i=0
  // 4. temp = abs(valor - a[i]) //1...N-1
  // 5. Si temp < min -> min = temp
  for (int i = 0; i < N; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  int x = abs(a[0] - valor);
  int distancia_cercana = a[0];
  bool esExacto = false;
  if (x == 0) {
    esExacto = true;
  } else {
    for (int i = 1; i < N; i++) {
      int temp = abs(a[i] - valor);
      if (temp < x) {
        x = temp;
        distancia_cercana = a[i];
        if (temp >= x){
            break;
        }
        if (distancia_cercana == 0) {
          esExacto = true;
          break;
        }
      }
    }
  }
  if (esExacto) {
    cout << "Se encontró la coincidencia exacta\n";
  } else {
    cout << "No se encontró la coincidencia exacta\n";
    cout << "La ciudad más cercana está a " << distancia_cercana << "Km"
         << endl;
  }
  return 0;
}
