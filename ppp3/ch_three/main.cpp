#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  // factors to multiply input unit to get corresponding meters
  constexpr double cm_to_m = 0.01;
  constexpr double in_to_m = 0.0254;
  constexpr double ft_to_m = 0.3048;

  std::vector<double> dimensions = {};
  char unit = ' ';
  double value = 0.0;

  std::cout
      << "Enter value and unit e.g 10 c (acceptable units are meters (m), "
         "centimeters (c), inches (i) and foot (f)).\n";
  std::cout << "Enter (CTRL-D) to exit\n";

  while (std::cin >> value >> unit) {
    if (value <= 0.0) {
      std::cout << "Enter a positive number.\n";
      continue;
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
    double sum = std::accumulate(dimensions.begin(), dimensions.end(), 0.0);

    std::cout << "sum: " << sum << "m\n";
    std::cout << "total entries: " << dimensions.size() << "\n";
    std::cout << "largest: " << dimensions.back() << "m\n";
    std::cout << "smallest: " << dimensions.front() << "m\n";

  } else {
    std::cout << "Exiting..\n";
  }
}
