#include <ctime>
#include <iostream>
#include <random>

using namespace std;

int main() {
  srand(time(NULL));
  int N = 5;
  double array[N][N];
  int max = 0;
  int max_i = 0;
  int max_j = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      array[i][j] = random() % 100 + 1;
      cout << array[i][j] << " ";
      if (i == j and max < array[i][i]) {
        max = array[i][i];
        max_i = i;
        max_j = i;
      }
      if (i == N - j - 1 and max < array[i][j]) {
        max = array[i][j];
        max_i = i;
        max_j = j;
      }
    }
    cout << endl;
  }
  cout << "El elemento mayor de la diagonal principal es: " << max
       << " en la posición i: " << max_i << " j:" << max_j << endl;

  return 0;
}
