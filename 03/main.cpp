#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> disliked = {"happy", "delighted", "quick", "jiffy"};
  std::vector<std::string> sentence = {};

  std::cout << "Write a sentence containing the word happy:\n";
  std::cout << "input:\n";
  for (std::string word = ""; std::cin >> word;) {
    if (std::find(disliked.begin(), disliked.end(), word) != disliked.end()) {
      sentence.push_back("BLEEP");
    } else {
      sentence.push_back(word);
    }
  }

  std::cout << "output:\n";
  for (std::string word : sentence) {
    std::cout << word << " ";
  }

  std::cout << '\n';
}
