#include <cmath>
#include <iostream>

using namespace std;

// {1} , n=1
// 0,1 // 2
// {1,2} , n=2
// 0,1,2,1+2 // 4
// {1,2,3} , n=3
// 0,1,2,3, 1+2, 1+3, 2+3, 1+2+3  // 8
// n = 1,2,3
// p = 2,4,8
// 2^n
//
// {1,2,3,4}
// suma={0}
// sizeA=1
// i=0...3
// i=0 , j=0
// {1,2,3}
// suma ={0,1}
// sizeA++ //2
// i=1
// j=0
// {1,2,3}
// suma = {0,1,2}
// j=1
// {1,2,3}
// suma = {0,1,2,3}
// sizeA++ //4
// i=2
// j=0
// {1,2,3}
// suma = {0,1,2,3,3}
// j=1
// {1,2,3}
// suma = {0,1,2,3,3,4}
// j=2
// {1,2,3}
// suma = {0,1,2,3,3,4,5}
// j=3
// {1,2,3}
// suma = {0,1,2,3,3,4,5,6}
// sizeA++ // 8
//
// suma = {0,1,2,3,3,4,5,6,4}
// suma = {0,1,2,3,3,4,5,6,  4,5,6 ,7,7,8,9,10}
//
void ordenarArreglo(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
int main() {
  int A[6] = {3, 34, 4, 12, 5, 2};
  // int A[] = {1, 2, 3, 4};
  int S = 59;
  int n = sizeof(A) / sizeof(A[0]);
  int p = pow(2, n);
  int suma[p];
  int size = 1;
  suma[0] = 0;
  for (int i = 0; i < n; i++) {
    int sizeActual = size;
    for (int j = 0; j < sizeActual; j++) {
      suma[size] = suma[j] + A[i];
      size++;
    }
  }
  ordenarArreglo(suma, p);
  for (int i = 0; i < n; i++) {
    cout << A[i] << " ";
  }
  cout << endl;
  int buscado = suma[0];
  for (int i = 0; i < p; i++) {
    cout << suma[i] << endl;
    if (suma[i]<=S){
        buscado = suma[i];
    } 
  }
  cout << buscado <<endl;
  return 0;
}
