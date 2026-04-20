#include <cmath>
#include <iostream>

using namespace std;

int main() {

  double x1, x2, x3;
  double y1, y2, y3;
  double d1, d2, d3;
  bool existeTriangulo;
  double area;
  // d1 = p1-p2
  // d2 = p2-p3
  // d3 = p1-p3

  cout << "Ingrese la coordenada x1: ";
  cin >> x1;
  cout << "Ingrese la coordenada y1: ";
  cin >> y1;
  cout << "Ingrese la coordenada x2: ";
  cin >> x2;
  cout << "Ingrese la coordenada y2: ";
  cin >> y2;
  cout << "Ingrese la coordenada x3: ";
  cin >> x3;
  cout << "Ingrese la coordenada y3: ";
  cin >> y3;

  // p1 == p2
  // p2 == p3
  // p1 == p3
  if (x1 == x2 and y1 == y2) {
    cout << "El punto 1 es igual al punto 2\n";
    existeTriangulo = false;
  } else if (x2 == x3 and y2 == y3) {
    cout << "El punto 2 es igual al punto 3\n";
    existeTriangulo = false;
  } else if (x1 == x3 and y1 == y3) {
    cout << "El punto 1 es igual al punto 3\n";
    existeTriangulo = false;
  } else {
    existeTriangulo = true;
  }
  if (existeTriangulo) {
    // distancias
    // pow == x^y
    d1 = pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), .5);
    d2 = pow(pow(x2 - x3, 2) + pow(y2 - y3, 2), .5);
    d3 = pow(pow(x1 - x3, 2) + pow(y1 - y3, 2), .5);
    // isosceles
    if (d1 == d2 or d1 == d3 or d2 == d3) {
      cout << "Es un triángulo isosceles\n";
    }
    else {
        cout << "El triángulo no es isosceles\n";
    }
    area = .5*abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    cout << "El área del triánguo es: "<<area<<endl;
  } else {
    cout << "No se puede calcular el área del triángulo, porque no existe\n";
  }

  return 0;
}
