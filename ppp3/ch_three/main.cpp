#include <iostream>

void almost_equal(double x, double y) {
  constexpr double hundredth = 1.0 / 100.0;

  if (x - y < hundredth) {
    std::cout << "the numbers are almost equal\n";
  }
}

int main() {
  std::cout << "Enter a pair of integers:\n";
  double val1 = 0;
  double val2 = 0;

  while (std::cin >> val1 >> val2) {
    if (val1 == val2) {
      std::cout << "the numbers are equal\n";
    }

    if (val1 > val2) {
      std::cout << "smaller value: " << val2
                << ". the larger value is: " << val1 << "\n";

      almost_equal(val1, val2);
    }

    if (val2 > val1) {
      std::cout << "the smaller is: " << val1 << ". larger value: " << val2
                << "\n";

      almost_equal(val2, val1);
    }
  }
}
