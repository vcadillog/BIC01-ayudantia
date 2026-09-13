#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  // i = M
  // j = O
  // 3
  int menorE = 50;
  int mayorE = 0;
  // Calcular energia
  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
      int energia = (i * j + i + 2 * j) % 50;
      if (energia > mayorE) {
        mayorE = energia;
      }
      if (energia < menorE) {
        menorE = energia;
      }
      if (menorE == 50) {
        cout << "Hubo un error" << endl;
      }
      // cout << i << " " << j << " e:"<<energia<< endl;
    }
  }

  cout << "Menor energia: " << menorE << endl;
  cout << "Se obtiene con:\n";
  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
      int energia = (i * j + i + 2 * j) % 50;
      if (energia == menorE) {
        // cout << i << " " << j << " menor e:" << menorE<< endl;
        cout << "M = " << i << " O = " << j << endl;
      }
    }
  }

  cout << endl;
  cout << "Mayor energia: " << mayorE << endl;
  cout << "Se obtiene con:\n";
  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
      int energia = (i * j + i + 2 * j) % 50;
      if (energia == mayorE) {
        cout << "M = " << i << " O = " << j << endl;
      }
    }
  }
  srand(time(NULL));
  for (int i = 0; i < 50; i++) {
    int r = random() % 15 - 3;
    cout << r << endl;
  }
  cout << time(NULL) << endl;
  //[0-9] -> [-3 - 11] -> [0 - 14]

  return 0;
}
