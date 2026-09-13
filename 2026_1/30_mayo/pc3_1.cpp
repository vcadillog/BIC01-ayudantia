#include <iostream>
#include <random>
#include <ctime>

using namespace std;

// N 0...N
// El tamaño es 10
// Los valores que pueden tomar es de 0 a 20
//
// Ordenado [0,1,2...,20]
// creo otro arreglo de tamaño 10
// elijo de forma aleatoria los indices del otro arreglo
//
int main(){
    srand(time(0));
    int N=21;
    int a[N];
    for (int i=0; i<N; i++){
        a[i] = i;
        cout << a[i]<< " ";
    }
    cout << endl;
    for (int i=0; i<N; i++){
        //generar aleatoriamente un indice
        int j=random()%N;
        swap(a[i], a[j]);
        // a = {1 2 3 4 5}
        // j = 4
        // i = 0
        // a[0], a[4]
        // 1, 5
        // a = {5,2,3,4,1}
    }
    for (int i=0; i<N; i++){
        cout << a[i]<< " ";
    }
    cout << endl;
    // copiar los primeros 10 elementos al arreglo de tamaño 10
    int M = 10;
    int b[M];
    for (int i=0; i<M; i++){
        b[i] = a[i];
        cout << b[i]<< " ";
    }
    cout << endl;
}
