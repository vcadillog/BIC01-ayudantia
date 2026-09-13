#include <iostream>
#include <ctime>
#include <random>

const int N = 7;
using namespace std;

int main() {
  int arr[N];
  // POBLAR EL ARRAY ORDENADO
  srand(0);
  for (int i=0; i<8; i++){
      arr[i] = i;
  }
  for (int i=0; i<8; i++){
      cout << arr[i] << " ";
  }
  cout <<endl;
  for (int i=0; i<8; i++){
      //i , j
      int temp = arr[i];
      int j = rand()%(N+1);
      //cout << i << " " << j << endl;
      //arr[i] = j;
      arr[i] = arr[j];
      arr[j] = temp;
      //cout << arr[i] << " " << arr[j] << endl;
      //cout << arr[i] << " " <<;
  }
  cout << endl;
  for (int i=0; i<8; i++){
      cout << arr[i] << " ";
  }
  cout <<endl;
  
  return 0;
}

// Un arreglo de tamaño 8 colocar números de 0 a 7 de forma aleatoria y que no
// se repita.

// 0 al 7
