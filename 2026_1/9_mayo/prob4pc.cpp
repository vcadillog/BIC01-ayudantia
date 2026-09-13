#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double teta;
  double long ultimoTermino = 0;
  // teta = 1.047197;
  teta = 10;
  int n = 0;
  double e = pow(10, -6);
  long double cos_calc = 0;
  long double cos_real = cos(teta);
  cout << "Cos real: " << cos_real << endl;

  for (int i = 0; i > 0; i++) {
    if (abs(ultimoTermino) > e) {
      break;
    }
  }
  while (true) {
  }

  do {
    // sum (-1)^n(x^(2n))/(2n!)
    // 0!, 2!, 4!
    long double fact = 1; // fact = 2
    // n=0 ; 1<0 -> fact=1
    // n=1 ; i=1 fact=1, i=2, fact=2
    //
    // n=2 ; i=1 fact=1, i=2, fact=2
    for (int i = 1; i <= 2 * n; i++) {
      fact *= i;
    }
    cout << "n: " << 2 * n << " " << fact << endl;
    ultimoTermino = pow(-1, n) * pow(teta, 2 * n) / (fact);
    cout << "Ultimo termino:" << ultimoTermino << endl;
    cos_calc += ultimoTermino;
    // cout << "Cos calc:"<< cos_calc<<endl;
    n++;
  } while (abs(ultimoTermino) > e);
  cout << "Cos calculado:" << cos_calc << endl;
  cout << "Iteraciones:" << n << endl;
  return 0;
}
