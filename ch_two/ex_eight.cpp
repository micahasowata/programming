// should be a simple calculator
#include <iostream>

int main() {
  std::cout << "Enter an operator (e.g +, -, /, *, plus, minus, mul, or div), "
               "then two numbers:\n";

  std::string opr = "";
  int val1 = 0;
  int val2 = 0;

  std::cin >> opr >> val1 >> val2;

  if (opr == "+") {
    std::cout << val1 << " + " << val2 << " = " << val1 + val2 << '\n';
  } else if (opr == "plus") {
    std::cout << val1 << " plus " << val2 << " = " << val1 + val2 << '\n';
  } else if (opr == "-") {
    std::cout << val1 << " - " << val2 << " = " << val1 - val2 << '\n';
  } else if (opr == "minus") {
    std::cout << val1 << " minus " << val2 << " = " << val1 - val2 << '\n';
  } else if (opr == "*") {
    std::cout << val1 << " * " << val2 << " = " << val1 * val2 << '\n';
  } else if (opr == "mul") {
    std::cout << val1 << " mul " << val2 << " = " << val1 * val2 << '\n';
  } else if (opr == "/") {
    std::cout << val1 << " / " << val2 << " = " << val1 / val2 << '\n';
  } else if (opr == "div") {
    std::cout << val1 << " div " << val2 << " = " << val1 / val2 << '\n';
  } else {
    std::cout << opr << " is not supported.\n";
  }
}
