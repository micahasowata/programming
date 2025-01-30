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

  // x y
  if (x > y) {
    cout << "x is greater than y\n";
  } else if (x == y) {
    cout << "x is equal to y\n";
  } else {
    cout << "x is less than y\n";
  }

  // y z
  if (y > z) {
    cout << "y is greater than z\n";
  } else if (y == z) {
    cout << "y is equal to z\n";
  } else {
    cout << "y is less than z\n";
  }

  // x z
  if (x > z) {
    cout << "x is greater than z\n";
  } else if (y == z) {
    cout << "x is equal to z\n";
  } else {
    cout << "x is less than z\n";
  }
}
