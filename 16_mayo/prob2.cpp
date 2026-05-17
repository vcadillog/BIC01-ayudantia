#include <iostream>

using namespace std;

int main() {

  int n;

  cout << "ingrese un valor para n (1 al 10)" << endl;
  cin >> n;
  if (n > 10 or n < 1) {
    cout << "Numero invalido, terminando el programa\n";
  } else {
    // 1......... i = 1
    // 1.2....... i = 2
    // 1.2.3..... i = 3
    // 1.2.3.4... i = 4
    // 1.2.3.4.5. i = N
    for (int i = 1; i <= n; i++) {
      int contador = 1;
      for (int j = 1; j <= 2 * n - 1; j++) {
        if (j % 2 == 0) {
          cout << ".";
        } else if (j % 2 == 1 and j <= 2*i) {
          cout << contador;
          contador++;
        } else {
          cout << ".";
        }
      }
      cout << ".";

      cout << endl;
    }
  }

  return 0;
}
