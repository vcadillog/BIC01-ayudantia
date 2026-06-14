#include <cmath>
#include <iostream>

using namespace std;

int centigradosAkelvin(int T) {
  T = T - 273;
  return T;
}

int centigradosAkelvin(int &T, int y) {
  T = T - 273;
  cout << y << endl;
  return T;
}

void multpilcar(int arr[], int N, int p) {
  for (int i = 0; i < N; i++) {
    arr[i] = arr[i] * p;
  }
}

void escribirArreglo(int arr[], int N) {
  for (int i = 0; i < N; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// 10 base 2
// 10%2 = 0
// 10/2 = 5
// 5%2 = 1
// 5/2 = 2
// 2%2 = 0
// 2/2 = 1
// 1%2 = 1
// 1/2 = 0
// 10->1010(2)
int transformarBase(int n, int b, int contador) {
  if (n == 0) {
    return 0;
  }
  contador++;
  int M = transformarBase(n / b, b, contador);
  // cout << n%b <<endl;
  M += (n % b) * pow(10, contador);
  cout << M << " " << contador << endl;
  // 1, 0, 1, 0
  // 0*10^0 + 1*10^1 + 0*10^2 + 1*10^3
  return M;
}
// f(10,2)
// n = 10, b=2;
// i=0, f(5,2) -> x
// i=1, f(2,2) -> x
// i=2, f(1,2) -> x
// i=3, f(0,2) -> x
// M = 0
// n = 1 -> cout << 1
// n = 2 -> cout << 0
// n = 5 -> cout << 1
// n = 10 -> cout << 0

// suma de potencia de base b y n terminos: b^1 + b^2 + ... + b^n
// return funcion + base^n
// caso base n=1
int sumatoria(int b, int n) {
  if (n == 1) {
    cout << b << endl;
    return b;
  }
  int M = sumatoria(b, n - 1) + pow(b, n);
  cout << M << endl;
  return M;
}
// b = 3, n = 4;
// f(3,4)
// i=0, f(3,3) + 3^4
// i=1, f(3,2) + 3^3
// i=2, f(3,1) + 3^2
// i=3, 3
// 3
// 3+3^2
// 3+3^2+3^3
// 3+3^2+3^3+3^4
//
// return f(x/10) + x^2
int sumaDigitosCuadrados(int n) {
  if (n == 0) {
    return 0;
  }
  int resto = n % 10;
  return sumaDigitosCuadrados(n / 10) + resto * resto;
}

// n = 253
// f(253)
// i=0, f(25) + 3*3
// i=1, f(2) + 5*5
// i=2, f(0) + 2*2
// 0
// 0 + 2*2
// 0 + 2*2 + 5*5
// 0 + 2*2 + 5*5 + 3*3

int sumaArreglo(int arr[], int i, int N) {
  // forma 1
  if (i == N - 1) {
    return arr[N - 1];
  }
  // forma 2
  //  if (i==N){
  //      return 0;
  //  }
  return sumaArreglo(arr, i + 1, N) + arr[i];
}

bool verificarPrimo(int n, int i) {
  if (i == 2) {
    return n % 2 != 0;
    // bool esPrimo = n % 2 != 0;
    // return esPrimo;
  }
  bool esPrimo = n % i != 0;
  if (!esPrimo) {
    return false;
  }
  // Si n/algo == 0 -> no es primo
  // F F F V F  ~ -> V V V F
  return verificarPrimo(n, i - 1) and esPrimo;
}

void verificarPrimo(int n) {
  bool esPrimo = verificarPrimo(n, n - 1);
  if (esPrimo) {
    cout << "Es primo\n";
  } else {
    cout << "No es primo\n";
  }
};

int main() {
  int T = 0;
  cout << centigradosAkelvin(T) << endl;
  cout << T << endl;
  cout << centigradosAkelvin(T, 2) << endl;
  cout << T << endl;
  int arr[] = {1, 2, 3, 4, 5};
  int N = sizeof(arr) / sizeof(arr[0]);
  escribirArreglo(arr, N);
  multpilcar(arr, N, 2);
  escribirArreglo(arr, N);
  cout << transformarBase(10, 2, -1) << endl;
  cout << sumatoria(3, 4) << endl;
  cout << sumaDigitosCuadrados(253) << endl;
  int arr2[] = {1, 2, 3, 4, 5};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  cout << sumaArreglo(arr2, 2, n2) << endl;
  for (int i = 2; i < 14; i++) {
    cout << i << " ";
    verificarPrimo(i);
  }
}
//[3, 34, 4, 12, 5, 2] S=10
// 3:
// 3, 34
// 3,34,4
// 3,34,4,12
// 3,34,4,12,5
// 3,34,4,12,5,2
// 3,4
// 3,4,12
// 3,4,12,5
// 3,4,12,5,2
// suma[N];
// final[N * N];
// p = 0;
// for (int i = 0; i < N; i++) {
//   for (int j = 0; j < N; j++) {
//     if (i != j) {
//       suma[i] = arr[j];
//       final[p] = suma[i];
//       p++;
//     }
//   }
//   for (int k = i + 1; k < N; k++) {
//     suma[i] -= arr[k];
//     final[p] = suma[i];
//     p++;
//   }
// }
//
// 3...N
for ()
// 3,12
// 3,12,5
// 3,12,5,6
// 3,5
// 3,5,2
// 3,2
// 34:
// 34,3
// 34,3,4
// 34,3,4,12
// 34,3,4,12,5
// 34,3,4,12,5,2
// 34,4
