#include <algorithm>
#include <cstdarg>
#include <iostream>
#include <string>
#include <vector>

int main() {
  constexpr double cm_to_m = 1.0 / 100;
  constexpr double inch_to_m = 1.0 / 39.37;
  constexpr double foot_to_m = 1.0 / 3.281;

  double value = 0;
  std::string unit = "";
  std::vector<double> measurements = {};

  std::cout << "Enter a measurement (units: cm, m, in, ft):\n";

  while (std::cin >> value >> unit) {
    if (unit == "m") {
      measurements.push_back(value);
    } else if (unit == "cm") {
      measurements.push_back(value * cm_to_m);
    } else if (unit == "in") {
      measurements.push_back(value * inch_to_m);
    } else if (unit == "ft") {
      measurements.push_back(value * foot_to_m);
    } else {
      std::cout << unit << " is currently not supported.\n";
      return 1;
    }
  };

  std::sort(measurements.begin(), measurements.end());

  for (double m : measurements) {
    std::cout << m << "m\t";
  }

  std::cout << "\n";
}
