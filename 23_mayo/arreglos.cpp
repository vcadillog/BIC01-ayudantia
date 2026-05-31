#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// int[4] = {1,2,3,4}
int main() {
  srand(time(0));
  // 1. Elimina duplicados
  // 2. Busca el maximo y si hay empate muestre todos
  // 3. Busca el minimo y si hay empate muestre todos
  //
  // Generando numeros aleatorios de 0 a 9
  int N = 10;
  int a[N];
  for (int i = 0; i < N; i++) {
    a[i] = random() % 10;
    cout << a[i] << " ";
  }
  cout << endl;

  int x[N]; // 
  // a=5 2 8 9 9 5 5 9 4 3
  // i=0 , j=0...0 => x[0] =-1 => x[0]= 5
  // 5 ,x = {5}
  // i=1
  // 2 , x[0], j=0...1 => x={5,2}
  // i=2
  // 8 , j=0...2 => x={5,2,8}
  // i=3
  // 9 , j=0...3 => x={5,2,8,9}
  // i=4
  // 9 , j=0...4 => x={5,2,8,9} , salta
  // x=5, 2, 8, 9, 4,3
  for (int i = 0; i < N; i++) {
    //-inf-1, 10-+inf
    x[i] = -1;
  }
  //  1. Recorrer todo el arreglo y crear un arreglo con elementos unicos
  //  a[0] != x[0]
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < i + 1; j++) {
      // 6 7 8 5 3 7 8 9 9 7
      // 6 7 8 5 3 9
      //-1 9 7 5
      //-1 9 7 6
      //-1 9 7 7
      //  i = 7
      // 6 7 8 5 3 9 9 9 -1 -1
      //  j =0...4
      //  j = 5
      //  x[5] == -1 V
      //  x[5] = 9
      //  deberia haberse detenido
      //  j = 6
      //  x[6] == -1 V
      //  x[6] = 9
      //  j = 7
      //  x[7] == -1 V
      //  x[7] = 9
      //  j=0...7
      //  x[5] = 9
      //  j = 6
      if (x[j] == a[i]) {
        break;
      }
      if (x[j] == -1) {
        // cout << x[j] << " " << a[i] <<" " <<i <<" "<<j<< " ";
        // cout << endl;
        x[j] = a[i];
        break;
      }
    }
  }
  for (int i = 0; i < N; i++) {
    if (x[i] != -1) {
      cout << x[i] << " ";
    }
  }
  int maximo = x[0];
  int minimo = x[0];
  // minimo = 6, maximo = 6
  for (int i = 1; i < N; i++) {
      // i=1
      // maximo: 1 > 6 F , no se actualiza
      // minimo: 1 < 6 V , si se actualiza
      // maximo = 6, minimo = 1;
      // i = 2
      // maximo: 8 > 6 V, se actualiza
      // minimo: 8 < 1 F, no se actualiza
    
    //6 1 8 3 0 2 4 
    if (x[i] != -1) {
      if (maximo < x[i]){
          maximo = x[i];
      }
      if (minimo > x[i]){
          minimo = x[i];
      }
    }
  }
  cout << endl;
  for (int i = 0; i<N; i++){
      if (a[i] == maximo){
          cout << "Maximo: "<< maximo<<" i: "<< i<<endl;
      }
      if (a[i] == minimo){
          cout << "Minimo: "<< minimo<<" i: "<< i<<endl;
      }
  }
  //cout << "Maximo: " << maximo << " Minimo: " <<minimo<<endl;
  int b[] = {8,3,7,89,5,3,456,6,7,8,6,1,5};

  //N?
  cout << "Tamaño en memoria del arreglo: "<<sizeof(b)<<endl;
  cout << "Tamaño en memoria de un elemento del arreglo: "<<sizeof(b[0])<<endl;
  cout << "Tamaño en memoria de un elemento del arreglo: "<<sizeof(b[1])<<endl;
  cout <<"Cantidad de elementos del arreglo: " <<sizeof(b)/sizeof(b[0])<<endl;

  //a[1], a[2]
  //temp
  //temp = a[1];
  //a[1] = a[2];
  //a[2] = 
  // 1 2 3
  // X - Y
  // X X Y
  // Y X Y
  // Y - X
  // -------
  // 1 2
  // X Y
  // Y Y
  // Y Y
  // 123456789
  // 986423751

  return 0;
}
// mayor a menor
// 5,6,1,3
// i = 0
// intercambiado = falso
// j = 0..2
// j=0
// 6,5,1,3
// inteercambiado = verdadero
// j=1
// 6,5,1,3
// j=2
// 6,5,3,1
// n-i-1
// i = 1
// intercambiado = falso
// j=0...1
// j=0
// 6,5,3,1
// j=1
// 6,5,3,1
// intercambiado = falso
// si intercambiado == falso entonces ya esta ordenado
// i = 2
// j =0...0
// 6,5,3,1
//
// Como ordenar los elementos de una matriz, 
// [1,2,3,4]
// [5,6,7,8]
// [9,10,11,12]
// (i,j)=>qué pasa?
// i = fila
// j = columna
// M[][]
// for (int i){
//  arr2[J]
//  for (int j){
//    cout <<a[i][j];
//    arr2[j] = arr1[i][j]
//  }
//  burbuja
//  arr2[j] ordenado
//  for (int J){
//    M[i][j] = arr2[j]
//  }
// }
// i=0
// j=0..3
// 5 (0,0)
// 1 (1,0)
// 8 (2,0)
// [5,1,8] -> burbuja -> M[0] ={1,5,8}
// [9,2,9] -> burbuja -> M[1] ={2,9,9}
// [7,4,3] -> burbuja -> M[2] = {3,4,7}
// [3,3,1] -> burbuja -> M[3] = {1,3,3}
// 
// [5,9,7,3]
// [1,2,4,3]
// [8,9,3,1]
//
// [1,2,3,1]
// [5,9,4,3]
// [8,9,7,3]
