#include <iostream>

using namespace std;

int main() {
  int a[5] = {0, 1, 2, 3, 4};
  int b[] = {1, 2, 3};
  int m[2][3] = {
      {1, 2, 3},
      {4, 5, 6},
  };
  int m2[2][3] = {1, 2, 3, 4, 5, 6};
  int m3[2][3];
  m3[0][0] = 1;
  m3[0][1] = 2;
  for (int i=0; i<2; i++){
      for(int j=0; j<3; j++)
      {
          cout << m3[i][j] << " ";
      }
      cout << endl;
  }
  int m4[][3]={1,2,3,4,5,6};
  cout << sizeof(m4) <<endl; //24 bytes 4*6
  int total_elem = sizeof(m4)/sizeof(m4[0][0]);
  // total = filas x columnas => filas = total/columnas
  cout << "Filas: "<<total_elem/3<<endl; //24/6=6, F = 2 desconocido C=3 conocido
                                       //total/columnas=filas
  cout << m3[3][3]<<" "<<m3[1][2] << endl;

  int COLS = 5;
  int FILAS = 2;
  int m5[FILAS][COLS];
  return 0;
}
