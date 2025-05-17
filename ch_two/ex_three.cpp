// should two numeric inputs
#include <iostream>

int main() {
  std::cout << "Enter two integers that you want to compare:\n";
  int val1 = 0;
  int val2 = 0;
  std::cin >> val1 >> val2;

  // sum
  std::cout << "sum of " << val1 << " and " << val2 << " is " << val1 + val2
            << "\n";

  // difference
  std::cout << "difference of " << val1 << " and " << val2 << " is "
            << val1 - val2 << "\n";

  // product
  std::cout << "product of " << val1 << " and " << val2 << " is " << val1 * val2
            << "\n";

  // ratio (interpreted as quotient)
  std::cout << "ratio of " << val1 << " and " << val2 << " is " << val1 / val2
            << " : 1" << "\n";

  // smaller and larger
  if (val1 < val2) {
    std::cout << val1 << " is smaller than " << val2 << "\n";
  } else if (val1 > val2) {
    std::cout << val1 << " is greater than " << val2 << "\n";
  } else {
    std::cout << val1 << " is equal to " << val2 << "\n";
  }
}
