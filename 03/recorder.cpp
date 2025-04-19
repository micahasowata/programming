#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// pair unique names to their corresponding scores
int main() {
  // input
  std::string name = "";
  double score = 0;

  // destination containers
  std::vector<std::string> names = {};
  std::vector<double> scores = {};

  std::cout << "Pairer. (to quit write NoName 0)\n";
  std::cout << "write a name and a score:\n";

  while (std::cin >> name >> score) {
    if (name == "NoName" && score == 0) {
      std::cout << "quitting input...\n";
      break;
    }

    // ensure input is not a possible duplicate
    if (std::find(names.begin(), names.end(), name) == names.end()) {
      names.push_back(name);
      scores.push_back(score);
    } else {
      std::cout << "error: " << name << " already exists\n";
      return 1;
    }
  }

  std::cout << "\npublishing output...\n";
  // use general for rather than the range for to take advantage of the explicit
  // index to access the corresponding score element
  for (int i = 0; i < names.size(); ++i) {
    std::cout << names.at(i) << " === " << scores.at(i) << '\n';
  }
}
