#include <iomanip>
#include <iostream>

using namespace std;

/*
n = 3
  *
 *1*
*121*
 *1*
  *
i= 3, j = 3
i= 4, j = 2
j = 6 - i
n = 4
   *
  *1*
 *121*
*12321*
 *121*
  *1*
   *
i=4, j=5
i=5, j=4
i=6, j=3
n= 3 -> j = 6 - i
n= 4 -> j = 9-i
n= 5 -> j = 12-i
j = 3*(n-1)-i
6 = 3*(3-1)
9 = 3*(4-1)
12 = 3*(5-1)
*/

int main() {
  int tamano = 7;
  char matriz[tamano * 2 - 1][tamano * 2 - 1];

  for (int i = 0; i < 2 * tamano - 1; i++) {
    for (int j = 0; j < 2 * tamano - 1; j++) {
      matriz[i][j] = ' ';
    }
  }

  // parte 1
  for (int i = 0; i < tamano; i++) {
    for (int j = 0; j < tamano; j++) {
      if (i == tamano - j - 1) {
        matriz[i][j] = '*';
      }
    }
  }

  for (int i = 0; i < tamano; i++) {
    int contador = '1';
    for (int j = 0; j < tamano; j++) {
      if (i > tamano - j - 1) {
        matriz[i][j] = contador;
        contador++;
      }
    }
  }

  // parte 2
  for (int i = 0; i < tamano; i++) {
    for (int j = tamano; j < tamano * 2 - 1; j++) {
      // i = 0, j=4,
      // i=1, j=5
      // i=2, j=6
      if (j == tamano - 1 + i) {
        matriz[i][j] = '*';
      }
    }
  }

  for (int i = 0; i < tamano; i++) {
    int contador;
    for (int j = tamano - 1; j < tamano * 2 - 1; j++) {
      if (j == tamano - 1) {
        contador = matriz[i][j];
      }
      if (j < tamano - 1 + i and j >= tamano) {
        matriz[i][j] = contador;
      }
      contador--;
    }
  }

  // parte 3
  // i = 0+5, j=1,
  // i=1+5, j=2
  // i=2+5, j=3
  for (int i = tamano; i < 2 * tamano - 1; i++) {
    for (int j = 0; j < tamano; j++) {
      if (i == tamano + j - 1) {
        matriz[i][j] = '*';
      }
    }
  }

  for (int i = tamano; i < 2 * tamano - 1; i++) {
    int contador = '1';
    for (int j = 0; j < tamano; j++) {
      if (i < tamano + j - 1) {
        matriz[i][j] = contador;
        contador++;
      }
    }
  }

  // parte 4
  for (int i = tamano; i < 2 * tamano - 1; i++) {
    for (int j = tamano; j < tamano * 2 - 1; j++) {
      // i = 0+5, j=7,
      // i=1+5, j=6
      // i=2+5, j=5
      // j = ai+b
      // a=-1 ,b=12
      // j = 12-i
      // tamano = 5
      // j = 3*(n-1)-i
      if (j == 3 * (tamano - 1) - i) {
        matriz[i][j] = '*';
      }
    }
  }

  for (int i = tamano; i < 2 * tamano - 1; i++) {
    int contador;
    for (int j = tamano - 1; j < tamano * 2 - 1; j++) {
      // i = 5, j=3
      // i = 6, j=3
      // i = 7, j=3
      //
      if (j == tamano - 1) {
        contador = matriz[i][j];
      }
      // i = 5, j < 8 y j >= tamano
      // i = 6, j < 7
      // i = 7, j < 6
      //  if (j == 3*(tamano-1) - i) {
      if (j < 3 * (tamano - 1) - i  and j >= tamano) {
        matriz[i][j] = contador;
      }
      contador--;
    }
  }

  for (int i = 0; i < tamano * 2 - 1; i++) {
    for (int j = 0; j < tamano * 2 - 1; j++) {
      cout << setw(2)<<matriz[i][j]<<setw(2);
    }
    cout << endl;
  }
  return 0;
}
