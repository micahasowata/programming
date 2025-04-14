#include <iostream>
#include <string>

int main() {
  std::cout << "enter an operator (from: +, "
               "−, ∗, /, plus, minus, mul, div) then two numbers :\n";
  std::string opr = "";
  double operand_one = 0;
  double operand_two = 0;

  std::cin >> opr >> operand_one >> operand_two;

  double result = 0;

  if (opr == "+" || opr == "plus") {
    result = operand_one + operand_two;
  } else if (opr == "-" || opr == "minus") {
    result = operand_one - operand_two;
  } else if (opr == "*" || opr == "mul") {
    result = operand_one * operand_two;
  } else if (opr == "/" || opr == "div") {
    result = operand_one / operand_two;
  } else {
    throw std::runtime_error("operator is not supported");
  }

  std::cout << operand_one << " " << opr << " " << operand_two << " = "
            << result << '\n';
}
