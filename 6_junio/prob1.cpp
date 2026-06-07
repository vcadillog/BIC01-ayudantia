#include <iostream>

using namespace std;

int centAKelvin(int T) {
  T = T - 273;
  return T;
}

int centAKelvinRef(int &T) {
  T = T - 273;
  return T;
}

bool fun(int T) {
  double x = 5.8;
  for (int i = 0; i < 10; i++) {
    if (i == 20) {
      return x;
    }
  }
  return T;
}

int factorial(int n);

int potencia(int n, int q);

void calculadora(int n);

void escribirArreglo(int arr[], int n);

void escribirMatriz(int arr[][3], int n);

void ordenarArreglo(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void ordenarFilas(int arr[][3], int n) {
  for (int i = 0; i < n; i++) {
    ordenarArreglo(arr[i], 3);
  }
}
int factorialRecursivo(int n) {
  // caso base
  if (n == 1) {
    return 1;
  }

  int b = n * factorialRecursivo(n - 1);
  cout << b << endl;
  return b;
}
//
// n = 4, factorial(4)
// i=0 factorial(3)
// i=1 factorial(2)
// i=2 factorial(1) 
//
// 1*2 = 2
// 2*3 = 6
// 6*4 = 24
int recursividad2(int n) {
  // caso base
  if (n == 16) {
    return 4;
  }

  int b = n * recursividad2(n * 2);
  cout << b << endl;
  return b;
}
//n = 1
//recursividad(1)
//i = 0 , recursividad(2)
//i = 1 , recursividad(4)
//i = 2 , recursividad(8)
//i = 3 , recursividad(16)
//
// 4
// 4*8
// 4*8*4 = 32*4 = 128
// 2*4*8*4 = 256
// 1*2*4*8*4 = 256
//

int potenciaRecursiva(int a, int exp) {
  // caso base
  if (exp == 0) {
    return a;
  }
  cout << exp << endl;
  int b = a * potenciaRecursiva(a, exp - 1);
  cout << b << endl;
  return b;
}
// a ^ e = a^(e-1) * a^1
// a ^ (e - 1) * a = a ^ (e - 2) * a^2
// a ^ (e - 2) * a = a ^ (e - 3) * a^3
// ...
// a^e = a^1 * a^(n-1)
//
// a = 3, exp = 4
// potencia(3,4)
// i = 0 -> potencia(3,3)
// i = 1 -> potencia(3,2)
// i = 2 -> potencia(3,1)
// i = 3 -> potencia(3,0) = 3 (caso base)
// return
//
//
// potencia(3,0) = 9 = 3*3
// potencia(3,1)
// potencia(3,2)
// potencia(3,3)
// potencia(3,4)
//
// 9
// potencia(3,1)  = 3*9 = 27
// potencia(3,2)
// potencia(3,3)
// potencia(3,4)
//
// 27
// potencia(3,2) = 3*27 = 81
// potencia(3,3)
// potencia(3,4)
//
// 81
// potencia(3,3) = 3*81 = 243
// potencia(3,4)
//
// 243
// potencia(3,4) = 3*243 = 729

// i = 0 -> a
// i = 1 -> a*a
// i = 2 -> a*a^2
// i = 3 -> a*a^3

// 0 1 1 2 3 5 8
int fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}
// n = 5
// i=0,                  fib(4)           +               fib(3)
// i=1, (      fib(3) +          fib(2))  +           (fib(2) + fib(1))
// i=2, (fib(2) + fib(1)) + (fib(1) + fib(0)) + fib(1) + fib(0)    + 1 = 1 + fib
// i=3, fib(1) + fib(0) + 1 + 1 + 0 + 1 + 0  = 3 + fib
// i=4, 1 + 0 = 1
//
// 1+0
// 1 + 3
// 4 + 1
// 5
// 5

int main() {
  // T-273
  int t = 0;
  int t1 = centAKelvin(t);
  // t = 0
  // t1 = -273
  cout << t << " " << t1 << endl;
  int t2 = 10;
  t = centAKelvinRef(t2);
  cout << t << " " << t2 << endl;
  // t2 = -263
  // t = -263
  if (fun(-1)) {
    cout << "Es verdadero\n";
  } else {
    cout << "Es falso\n";
  }
  calculadora(5);
  int a[] = {3, 2, 4, 6, 1, 5};
  int n = sizeof(a) / sizeof(a[0]);
  escribirArreglo(a, n);
  int A[][3] = {{3, 5, 2}, {8, 7, 1}, {10, 12, 9}, {16, 17, 18}};
  int N = sizeof(A) / sizeof(A[0]); // A = 3*4*4 bytes A[0] = 4*3 bytes
  cout << N << endl;
  escribirMatriz(A, N);
  ordenarArreglo(a, n);
  escribirArreglo(a, n);
  ordenarFilas(A, N);
  escribirMatriz(A, N);
  potenciaRecursiva(3, 5);
  cout << fibonacci(5) << endl;
  cout << factorialRecursivo(4) << endl;
  cout << "Recursividad 2"<<endl;
  cout << recursividad2(1) << endl;
  return 0;
}

int factorial(int n) {
  int i = 1;
  if (n > 1) {
    for (int j = 1; j < n + 1; j++) {
      i = i * j;
      // j = 1 -> i=1
      // j = 2 -> i=2
      // j = 3 -> i=6
    }
  }
  return i;
}

int potencia(int n, int q) {
  int b = n;
  // n = 2;
  for (int i = 1; i < q; i++) {
    n = b * n;
    // i = 0 -> n = n^2 , n=4
    // i = 1 -> n = n^3 , n=8
  }
  return n;
}

void calculadora(int n) {
  cout << factorial(n) << endl;
  cout << potencia(n, 3) << endl;
}

void escribirArreglo(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void escribirMatriz(int arr[][3], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}
