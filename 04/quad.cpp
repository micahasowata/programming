#include <cmath>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

void error(std::string message) {
  throw std::runtime_error{"error: " + message + '\n'};
}

// calculate the roots of quadratic equation using the quadratic formula
// see more: https://en.wikipedia.org/wiki/Quadratic_formula
std::vector<double> solve_equation(double a, double b, double c) {
  // a must be non-zero
  if (a == 0) {
    error("a cannot be 0");
  }

  double discriminant = std::pow(b, 2) - 4 * a * c;

  if (discriminant < 0) {
    error("no real roots");
  }

  std::vector<double> roots = {};

  double negative_b = b * -1;
  double twice_a = 2 * a;

  double first_root = (negative_b + std::sqrt(discriminant)) / twice_a;
  roots.push_back(first_root);

  // a discriminant == 0 indicates repeated roots
  // so repeat if necessary else calculate second root
  if (discriminant == 0) {
    roots.push_back(first_root);
  } else {
    double second_root = (negative_b - std::sqrt(discriminant)) / twice_a;
    roots.push_back(second_root);
  }

  return roots;
}

int main() {
  double a = 0.0;
  double b = 0.0;
  double c = 0.0;

  std::cout << "enter the a, b and c of a quadratic equation:\n";

  if (std::cin >> a >> b >> c) {
    try {
      std::vector<double> solutions = solve_equation(a, b, c);
      std::cout << "root one = " << solutions[0]
                << ", root two = " << solutions[1] << '\n';
    } catch (std::exception& e) {
      std::cerr << e.what();
    }
  } else {
    std::cerr << "exiting...\n";
  }
}
