#include <iostream>

int main() {
  std::cout << "Enter you top two favorite numbers (then press ENTER):\n";
  double val1 = 0;
  double val2 = 0;
  std::cin >> val1 >> val2;

  // smaller and larger
  if (val1 > val2) {
    std::cout << val1 << " is greater than " << val2 << '\n';
  } else {
    std::cout << val2 << " is greater than " << val1 << '\n';
  }

  // sum
  std::cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2
            << '\n';

  // difference
  std::cout << "The difference between " << val1 << " and " << val2 << " is "
            << val1 - val2 << '\n';

  // product
  std::cout << "The product of " << val1 << " and " << val2 << " is "
            << val1 * val2 << '\n';

  // ratio
  std::cout << "The ratio of " << val1 << " and " << val2 << " is "
            << "1:" << val1 / val2 << '\n';
}
