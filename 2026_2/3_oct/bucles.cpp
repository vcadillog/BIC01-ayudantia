#include <iostream>

using namespace std;

int main() {
  // for
  cout << "Ejecución for: \n";
  for (int i = 0; i < 10; i = i + 2) {
    cout << i << endl;
  }
  // 0,2,4,6,8

  // do
  int i = 0;
  bool condicion = true;

  cout << "Ejecución while: \n";
  while (condicion) {
    if (i < 10) {
      cout << i << endl;
      i = i + 2;
    } else {
      condicion = false;
    }
  }
  // 0, 2, 4, 6, 8, 10 X
  condicion = true;
  i=0;
  cout << "Ejecución while con break: \n";
  while (condicion) {
    if (i >= 10)
      break;
    cout << i << endl;
    i = i + 2;
  }
  // 0,2,4,6,8

  // do-while
  cout << "Ejecución de do-while\n";
  condicion = false;
  do {
    cout << i <<endl;
  } while(condicion);
  return 0;
}

