// quadratic equation solver
#include <cmath>
#include <cstdlib>
#include <iostream>

double find_discriminant(double a, double b, double c) {
  return b * b - 4 * a * c;
}

bool less_than_zero(double d, double epsilon) { return d < -epsilon; }

bool equal_zero(double d, double epsilon) { return std::abs(d) < epsilon; }

int main() {
  constexpr double epsilon = 1e-9;

  double a = 0.0;
  double b = 0.0;
  double c = 0.0;

  std::cout << "Quadratic solver. Solves equations of the form ax^2+bx+c = 0\n";
  std::cout << "Enter the a, b and c of the quadratic equation to get its real "
               "roots (Enter CTRL-D/CTRL-Z to exit:\n";
  std::cin >> a >> b >> c;

  if (equal_zero(a, epsilon)) {
    std::cout << "a must be non-zero\n";
    return 0;
  }

  double discriminant = find_discriminant(a, b, c);

  if (less_than_zero(discriminant, epsilon)) {
    std::cout << "Equation has no real solutions\n";
    return 1;
  } else if (equal_zero(discriminant, epsilon)) {
    double x = -b / (2.0 * a);

    if (equal_zero(x, epsilon)) {
      x = 0.0;
    }

    std::cout << "solutions: " << x << " twice \n";

    return 0;
  } else {
    double root = std::sqrt(discriminant);
    double x1 = (-b + root) / (2.0 * a);
    double x2 = (-b - root) / (2.0 * a);

    std::cout << "solutions: " << x1 << " and " << x2 << "\n";

    return 0;
  }
}
