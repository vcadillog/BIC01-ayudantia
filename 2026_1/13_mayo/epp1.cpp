#include <iostream>

using namespace std;

int main() {
  // 11
  // ***** ***** 11/2 + 1
  // ****   ****
  // ***     ***
  // **       **
  // *         *
  //
  // *         *
  // **       **
  // ***     ***
  // ****   ****
  // ***** *****
  // y>x ,
  int n = 4;
  for (int i = 0; i < n / 2; i++) {
    for (int j = n / 2; j > 0; j--) {
      if (j > i) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << " ";
    // ***** *****
    // ****   ****
    // ***     ***
    // **       **
    // *         *
    //
    // i=0 -> j = 0...5
    // i=1 -> j = 1...5
    // i=2 -> j = 2...5
    // i=3 -> j = 3...5

    for (int j = 0; j < n / 2; j++) {
      if (j >= i) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  if (n > 1) {
    cout << endl;
  }
  for (int i = 0; i < n / 2; i++) {
    for (int j = 0; j < n / 2; j++) {
      if (j <= i) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << " ";
    // *         *
    // **       **
    // ***     ***
    // ****   ****
    // ***** *****
    // i=0 -> j = 4...5
    // if (j>=n/2 -(i+1)){"*"} 4...5
    // else {" "}
    // i=1 -> j = 3...5
    // i=2 -> j = 2...5
    // i=3 -> j = 1...5

    for (int j = 0; j < n / 2; j++) {
      // if (j>=n/2 -(i+1)){"*"} 4...5
      if (j >= (n / 2 - (i + 1))) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
