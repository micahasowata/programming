#include <iostream>
using namespace std;
int main() {
  cout << "write two numbers:\n";
  int val1{0};
  int val2{0};
  cin >> val1;
  cin >> val2;

  // smaller
  if (val1 < val2) {
    cout << val1 << " is smaller than " << val2 << "\n";
  } else {
    cout << val2 << " is smaller than " << val1 << "\n";
  }

  // larger
  if (val1 > val2) {
    cout << val1 << " is greater than " << val2 << "\n";
  } else {
    cout << val2 << " is greater than " << val1 << "\n";
  }

  // sum
  cout << val1 + val2 << " is the sum of " << val1 << " and " << val2 << "\n";

  // difference
  cout << val1 - val2 << " is the difference of " << val1 << " and " << val2
       << "\n";

  // product
  cout << val1 * val2 << " is the product of " << val1 << " and " << val2
       << "\n";
}
