#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  int dado1, dado2, dado3;
  int contador=0,tiempo = time(0);
  bool sonIguales = false;
  srand(tiempo);
  // random() -> 1-6
  while (!sonIguales) {
    dado1 = random() % 6 + 1;
    dado2 = random() % 6 + 1;
    dado3 = random() % 6 + 1;

    if (dado1 + dado2 == dado3) {
      sonIguales = true;
    }
    contador++;
    cout << "Tirada " << contador;
    cout << "|| dado 1: " << dado1 ;
    cout << "|| dado 2: " << dado2 ;
    cout << "|| dado 3: " << dado3 <<endl;
  }
  cout << "Tuve que tirar los dados " << contador << " veces.\n";

  return 0;
}
