#include <cstring>
#include <iostream>
#include <string>

using namespace std;

string articulos[4] = {"el", "la", "los", "las"};

// Escribir una oracion y que busque los articulos
//  el, la, los, las

int main() {
  string frase = "El peruano es La persona estando en la";
  for (char &c : frase) {
    c = tolower(c);
    // cout << char(c);
  }
  cout << frase << endl;
  for (int i = 0; i < 4; i++) {
    string subfrase = frase;
    while (subfrase != "\0") {
      int ultElm = 0;
      int idx = subfrase.find(articulos[i]);
      if (idx != -1) {
        ultElm = idx + 1;
      }
      else{
          ultElm = 1;
      }
      subfrase = subfrase.substr(ultElm);
    }
  }
  return 0;
}
