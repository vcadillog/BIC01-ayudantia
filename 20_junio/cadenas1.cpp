#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;
int main() {
  char a = 64;
  a = 'b';
  char c[4] = {'b',' ', 99, '\0'};
  string b = "abc"; // string == char[] dinamico
  cout << a << endl;
  string articulos[4] = {"el", "la", "los", "las"};
  for (int i=0; i<4; i++){
      cout << c[i] ;
  }
  cout << endl;
  cout << articulos[0].length() << endl;
  
  for (char &x : articulos[2]) {
    x = toupper(x);
    x = tolower(x);
    cout << x;


    // cout << char(c);
  }
  cout << endl;
  cout << articulos[2]<<endl;
  string frase = "El peruano es La persona estando en la";
  cout << frase.substr(3,7)<<endl;
  string frase1, frase2;
  frase1 = "El";
  frase2 = " peruano";
  frase1 += frase2;
  cout << frase1 <<endl;

  char y[] = "ab\0";
  char z[] = "xy\0";
  strcat(y,z);
  cout << y << endl;
  char w; 
  int i = 0;
  while (w!='\0'){
      w = y[i];
      cout << w;
      i++;
  }
  cout << endl;
  char buffer[5];
  strncpy(buffer, "ABCDE", 5);
  cout << buffer << endl;
  char missing_null[] = {'A', 'B', 'C','\0'};
  cout << strlen(missing_null)<<endl;

  cout << "Escribe algo: ";
  string algo;
  // cin >> algo;
  getline(cin, algo);
  for (char &c : algo) {
    c = tolower(c);
    // cout << char(c);
  }
  int f = algo.find('n');
  algo = algo.substr(f+1);

  cout << stod(algo) << endl;

  return 0;
}
