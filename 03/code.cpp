#include <iostream>
using namespace std;

int main() {
  cout << "write an operator (+, -, /, *, plus, minus, mul, div)\n";
  string opr{""};
  cin >> opr;

  cout << "write two operands:\n";
  double x{0};
  double y{0};
  cin >> x >> y;

  if (opr == "+" || opr == "plus") {
    cout << x + y << "\n";
  } else if (opr == "-" || opr == "minus") {
    cout << x - y << "\n";
  } else if (opr == "/" || opr == "div") {
    cout << x / y << "\n";
  } else if (opr == "*" || opr == "mul") {
    cout << x * y << "\n";
  } else {
    cout << "not a valid operator\n";
  }
}
