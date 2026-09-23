#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.1415;

int main() {
    double radio, lado, areaCirculo, areaCuadrado, diferenciaAreas;
    cout << "Ingrese el valor del radio del círculo: ";
    cin >> radio;
    lado = sqrt(2)*radio;
    areaCirculo = PI*pow(radio,2);
    areaCuadrado = pow(lado,2);
    // innecesario se sabe que Area círculo > área cuadrado por estar circunscrito
    //diferenciaAreas = abs(areaCuadrado - areaCirculo);
    diferenciaAreas = areaCirculo - areaCuadrado;
    

    cout << "Área del cuadrado es: " << areaCuadrado<<endl;
    cout << "Área del círculo es: " << areaCirculo<<endl;
    cout << "La diferencia de áreas es: " << diferenciaAreas<<endl;


    // 2R = L*sqrt(2)
    // L = sqrt(2)*R
  return 0;
}
