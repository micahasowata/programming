#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>

double find_median(std::vector<double> t) {
  std::ranges::sort(t);

  std::size_t size = t.size();
  std::size_t half_size = size / 2;

  if (size % 2 == 0) {
    double first = t.at(half_size - 1);
    double second = t.at(half_size);

    return (first + second) / 2.0;
  }

  return t.at(half_size);
}

int main() {
  std::vector<double> temperatures = {};

  std::cout << "Enter temperatures over any period of time to find the median "
               "(type a non-number or Ctrl+D/Ctrl+Z then Enter to finish):\n";

  for (double temp = 0.0; std::cin >> temp;) {
    temperatures.push_back(temp);
  }

  if (temperatures.size() > 0) {
    double median = find_median(temperatures);
    std::cout << "median: " << median << "degrees\n";
  } else {
    std::cout << "Exiting...\n";
  }
}
