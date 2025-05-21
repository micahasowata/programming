#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  // factors to multiply input unit to get corresponding meters
  constexpr double cm_to_m = 0.01;
  constexpr double in_to_m = 0.0254;
  constexpr double ft_to_m = 0.3048;

  std::vector<double> dimensions = {};

  std::cout << "Enter meters (m), centimeters (c), inches (i), feet (f):\n";

  char unit = ' ';
  double value = 0.0;

  while (std::cin >> value >> unit) {
    if (value <= 0.0) {
      std::cout << "\nexiting...\n";
      break;
    }

    switch (unit) {
    case 'm':
      dimensions.push_back(value);
      break;
    case 'c':
      dimensions.push_back(value * cm_to_m);
      break;
    case 'i':
      dimensions.push_back(value * in_to_m);
      break;
    case 'f':
      dimensions.push_back(value * ft_to_m);
      break;
    default:
      std::cout << unit << " is unsupported\n";
    }
  }

  if (dimensions.size() > 0) {
    std::ranges::sort(dimensions);

    double sum = 0.0;

    for (double i : dimensions) {
      sum += i;
    }

    std::cout << "sum: " << sum << "m\n";
    std::cout << "total entries: " << dimensions.size() << "\n";
    std::cout << "largest: " << dimensions.at(dimensions.size() - 1) << "m\n";
    std::cout << "smallest: " << dimensions.at(0) << "m\n";
  }
}
