#include <iostream>
using namespace std;

int main() {
  cout << "spell out a number:\n";
  string number{""};
  cin >> number;

  if (number == "zero") {
    cout << 0 << "\n";
  } else if (number == "one") {
    cout << 1 << "\n";
  } else if (number == "two") {
    cout << 2 << "\n";
  } else if (number == "three") {
    cout << 3 << "\n";
  } else if (number == "four") {
    cout << 4 << "\n";
  } else {
    cout << "not a number I know\n";
  }
}
