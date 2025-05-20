#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> disliked = {"broccoli", "rounder", "dimmer"};

  std::cout << "Write a paragraph containing the word Broccoli:\n";

  std::vector<std::string> paragraph = {};

  for (std::string temp = ""; std::cin >> temp;) {
    paragraph.push_back(temp);
  }

  for (std::size_t i = 0; i < paragraph.size(); ++i) {
    std::cout << " "; // for in-sentence spacing

    if (std::find(disliked.begin(), disliked.end(), paragraph[i]) !=
        disliked.end()) {
      std::cout << "BLEEP";
      continue;
    }

    std::cout << paragraph[i];
  }

  std::cout << "\n"; // new line after redacting
}
