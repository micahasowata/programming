// quadratic equation solver
#include <cmath>
#include <iostream>

double find_discriminant(double a, double b, double c) {
  return b * b - 4 * a * c;
}

int main() {
  constexpr double zero = 0.0;
  constexpr double negative_one = -1;
  constexpr double two = 2;

  double a = 0.0;
  double b = 0.0;
  double c = 0.0;

  std::cout << "Enter the a, b and c of the quadratic equation to get its real "
               "roots (Enter CTRL-D/CTRL-Z to exit:\n";
  std::cin >> a >> b >> c;

  if (a == zero) {
    std::cout << "a must be non-zero\n";
    return 0;
  }

  double discriminant = find_discriminant(a, b, c);

  // discriminant less than zero indicates the absence of real roots
  if (discriminant < zero) {
    std::cout << "Equation has no real solutions\n";
    return 0;
  }

  // discriminant equal to zero indicates the repetition of a single real root
  double positive_x = (negative_one * b + std::sqrt(discriminant)) / two * a;

  if (discriminant == zero) {
    std::cout << "solutions are " << positive_x << " twice\n";
    return 0;
  }

  // discriminant is greater than zero therefore there are two real roots
  double negative_x = (negative_one * b - std::sqrt(discriminant)) / two * a;

  std::cout << "solutions are " << positive_x << " and " << negative_x << "\n";
}
