#include <iostream>
using namespace std;

int main() {
  cout << "write a number:\n";
  int num{0};
  cin >> num;

  if (num % 2 == 0) {
    cout << num << " is even\n";
  } else {
    cout << num << " is odd\n";
  }
}
