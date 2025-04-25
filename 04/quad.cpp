#include <cmath>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

void error(std::string message) {
  throw std::runtime_error{"error: " + message + '\n'};
}

std::vector<double> calc_equation(double a, double b, double c) {
  if (a == 0) {
    error("a cannot be 0");
  }

  std::vector<double> roots = {};

  // find the discriminant to determine presence of imaginary roots
  double d = std::pow(b, 2) - 4 * a * c;

  if (d < 0) {
    error("no real roots");
  }

  double negative_b = b * -1;
  double twice_a = 2 * a;

  // for +
  double root_one = (negative_b + std::sqrt(d)) / twice_a;
  roots.push_back(root_one);

  // for -
  // ensure that repeated roots are handled
  if (d == 0) {
    roots.push_back(root_one);
  } else {
    double root_two = (negative_b - std::sqrt(d)) / twice_a;
    roots.push_back(root_two);
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
      std::vector<double> solutions = calc_equation(a, b, c);
      std::cout << "root one = " << solutions[0]
                << " root two = " << solutions[1] << '\n';
    } catch (std::exception& e) {
      std::cerr << e.what();
    }
  } else {
    std::cerr << "exiting...\n";
  }
}
