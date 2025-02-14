#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
  std::cout << "write a positive whole number greater than 0:\n";
  double value{};
  std::cin >> value;

  std::vector<double> remainder = {};

  while (value > 0) {

    double quotient = value / 2;
    // check if quotient is a whole number
    if (std::floor(quotient) == quotient) {
      remainder.push_back(0);
    } else {
      remainder.push_back(1);
    }
    value =
        std::floor(quotient); // reset the content of value to floored quotient
  }

  if (remainder.size() > 0) {
    std::reverse(remainder.begin(),
                 remainder.end()); // reverse the order of the remainder to get
                                   // the final result
    for (double r : remainder) {
      std::cout << r;
    }
    std::cout << '\n';
  }
}
