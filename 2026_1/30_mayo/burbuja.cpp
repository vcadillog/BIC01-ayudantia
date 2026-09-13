#include <iostream>

using namespace std;
// busqueda lineal
// busqueda binaria
// ordenamiento burbuja

int main() {
  int a[] = {7, 8, 9, 2, 6, 3, 4, 1};
  int N = sizeof(a) / sizeof(a[0]);
  int x;
  // Ordenamiento Burbuja
  // 
  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N-i-1; j++) {
        if (a[j]<a[j+1]){
            //swap
            swap(a[j],a[j+1]); // -> a[j]=a[j+1], a[j+1]=a[j]
        }
    }
  }
  // Ordenamiento descendente
  cout << "Ordenamiento descendendente\n";
  for(int i=0; i<N; i++){
      cout << a[i] <<" ";
  }
  cout << endl;

  int menor = 0;
  int mayor = N - 1;
  int buscado = 1;
  bool encontrado = false;
  //para arreglo descendente
  while (menor <= mayor) {
    int medio = menor + (mayor - menor) / 2;
    if (a[medio] < buscado) {
      mayor = medio - 1;
    } else if (a[medio] > buscado) {
      menor = medio + 1;
    } else {
      encontrado = true;
      break;
    }
  }

  cout << "Busqueda binaria: \n";
  if (encontrado) {
    cout << "Se encontró el elemento: " << buscado;
    cout << endl;
  } else {
    cout << "No se encontró\n";
  }
  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N-i-1; j++) {
        if (a[j]>a[j+1]){
            //swap
            swap(a[j],a[j+1]); // -> a[j]=a[j+1], a[j+1]=a[j]
        }
    }
  }
  //int a[] = {7, 8, 9, 2, 6, 3, 4, 1};
  cout << "Ordenamiento ascendendente\n";
  for(int i=0; i<N; i++){
      cout << a[i] <<" ";
  }
  cout << endl;

  menor = 0;
  mayor = N - 1;
  buscado = 1;
  encontrado = false;
  //para arreglo ascendente
  while (menor <= mayor) {
    int medio = menor + (mayor - menor) / 2;
    if (a[medio] > buscado) {
      mayor = medio - 1;
    } else if (a[medio] < buscado) {
      menor = medio + 1;
    } else {
      encontrado = true;
      break;
    }
    //cout <<medio<< " "<<mayor<< " "<< menor<<endl;
  }

  cout << "Busqueda binaria: \n";
  if (encontrado) {
    cout << "Se encontró el elemento: " << buscado;
    cout << endl;
  } else {
    cout << "No se encontró\n";
  }
  return 0;
}
