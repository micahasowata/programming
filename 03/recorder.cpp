#include <algorithm>
#include <iostream>
#include <iterator>
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

  std::cout << "\nEnter a name to get the score:\n";

  for (std::string query = ""; std::cin >> query;) {
    auto indx = std::find(names.begin(), names.end(), query);

    // value found
    if (indx != names.end()) {
      auto pos = std::distance(names.begin(), indx);  // get index
      std::cout << scores.at(pos) << '\n';
    } else {
      std::cout << "name not found.\n";
    }
  }
}
