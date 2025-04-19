#include <iostream>
#include <string>

// reads a string from input and then, for each character read, prints out
// the character and its integer value on a line.

int main() {
  std::string input = "";

  std::cout << "write your favorite monlogue:\n";
  while (std::cin >> input) {
    std::cout << "\nCHARACTER:ASCII VALUE\n";
    for (char i : input) {
      std::cout << i << " : " << int(i) << '\n';
    }
  }
}
