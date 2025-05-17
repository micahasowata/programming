// convert miles to kilometers
#include <iostream>
#include <stdexcept>

int main() {
  std::cout << "Enter miles to find it kilometer equivalent:\n";
  double miles = 0.0;
  std::cin >> miles;

  if (miles <= 0) {
    throw std::runtime_error{"that's not valid"};
  }

  std::cout << miles << " miles is " << miles * 1.609 << " kilometers\n";
}
