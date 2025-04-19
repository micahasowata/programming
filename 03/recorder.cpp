#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// store and map names to scores
int main() {
  std::string name = "";
  int score = 0;

  std::vector<std::string> names = {};
  std::vector<int> scores = {};

  std::cout
      << "enter a name and corresponding score (write NoName 0 to exit):\n";
  while (std::cin >> name >> score) {
    if (name == "NoName" && score == 0) {
      std::cout << "\nerror: exiting...\n";
      break;
    }

    // check if the name can be found in the names vector
    if (std::find(names.begin(), names.end(), name) == names.end()) {
      names.push_back(name);
      scores.push_back(score);
    } else {
      std::cout << "\nerror: " << name << " already exist.\n";
      break;
    }
  }

  std::cout << "\nNAME:SCORE:\n";
  for (int i = 0; i < names.size(); ++i) {
    std::cout << names.at(i) << " === " << scores.at(i) << '\n';
  }
}
