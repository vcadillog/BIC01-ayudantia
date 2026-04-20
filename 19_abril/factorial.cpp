#include <iostream>

using namespace std;

int main() {
  // factorial = n*(n-1)*(n-2)*(n-3)*...*1
  int n;
  int fact = 1;
  cout << "Ingrese el factorial de que número quiere calcular: ";
  cin >> n;
  for (int i=1; i<=n; i=i+2){
     fact = i*fact;
     cout << fact <<endl;
  }
  fact = 1;
  int contador = 1;
  while(contador<=n){
     fact = contador*fact;
     contador = contador+2;
     cout << fact << " " <<contador<<endl;
  }
  fact = 1;
  for (int i= n;i>0;i--){
     fact = i*fact;
     cout << fact <<endl;
  }

  return 0;
}
