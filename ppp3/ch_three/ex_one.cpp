#include <cstddef>
#include <iostream>
#include <string>

int main() {
  std::string sentence = "";
  std::cin >> sentence;

  std::cout << "Enter a word to find the ASCII values of its characters:\n";

  for (std::size_t i = 0; i < sentence.length(); ++i) {
    std::cout << sentence[i] << "\t" << int(sentence.at(i)) << "\n";
  }
}
