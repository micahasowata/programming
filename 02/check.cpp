#include <iostream>
using namespace std;
int main() {
  cout << "write three decimal numbers:\n";
  int x{0};
  int y{0};
  int z{0};
  cin >> x;
  cin >> y;
  cin >> z;

  if (x > y && y > z && x > z) {
    cout << z << "\t" << y << "\t" << x << "\n";
  } else if (x < y && y > z && x > z) {
    cout << z << "\t" << x << "\t" << y << "\n";
  } else if (x > y && y < z && x > z) {
    cout << y << "\t" << z << "\t" << x << "\n";
  } else if (x > y && y > z && x < z) {
    cout << x << "\t" << z << "\t" << y << "\n";
  } else {
    cout << x << "\t" << y << "\t" << z << "\n";
  }

  //  // x y
  // if (x == y) {
  //    cout << "x is equal to y\n";
  //  } else {
  //    cout << "x is less than y\n";
  //  }

  //  // y z
  //  if () {
  //    cout << "y is greater than z\n";
  //  } else if (y == z) {
  //    cout << "y is equal to z\n";
  //  } else {
  //    cout << "y is less than z\n";
  //  }

  //  // x z
  //  if () {
  //    cout << "x is greater than z\n";
  //  } else if (y == z) {
  //    cout << "x is equal to z\n";
  //  } else {
  //    cout << "x is less than z\n";
  //  }
}
