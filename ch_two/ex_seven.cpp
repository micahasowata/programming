// should respond with digit for numbers written in words
#include <iostream>
#include <string>

int main() {
  std::cout << "Write a number between zero to four and get the digit form "
               "(e.g two -> 2):\n";
  std::string input = "";
  std::cin >> input;

  if (input == "zero") {
    std::cout << 0 << '\n';
  } else if (input == "one") {
    std::cout << 1 << '\n';
  } else if (input == "two") {
    std::cout << 2 << '\n';
  } else if (input == "three") {
    std::cout << 3 << '\n';
  } else if (input == "four") {
    std::cout << 4 << '\n';
  } else {
    std::cout << "not a number i know\n";
  }
}
