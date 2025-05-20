// should tell if numeric input is even or odd
#include <iostream>
#include <stdexcept>

int main() {
  std::cout << "Enter a number:\n";
  int input = 0;
  std::cin >> input;

  if (input <= 0) {
    throw std::runtime_error{"invalid input"};
  }

  if (input % 2 == 0) {
    std::cout << "The value " << input << " is even\n";
  } else {
    std::cout << "The value " << input << " is odd\n";
  }
}
