#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  std::vector<double> distances = {};

  std::cout << "How far are you from your favorite places, in km? (Enter "
               "CTRL-D/CTRL-Z to exit):\n";

  for (double d = 0.0; std::cin >> d;) {
    if (d < 0.0) {
      std::cout << "Distance must be non-negative\n";
      break;
    }

    distances.push_back(d);
  }

  if (!distances.empty()) {
    std::ranges::sort(distances);

    double total = std::accumulate(distances.begin(), distances.end(), 0.0);

    std::cout << "total distances: " << total << "km\n";
    std::cout << "shortest distance: " << distances.front() << "km\n";
    std::cout << "longest distance: " << distances.back() << "km\n";
    std::cout << "average distance: " << total / distances.size() << "km\n";
  } else {
    std::cout << "No valid distances entered\n";
  }
}
