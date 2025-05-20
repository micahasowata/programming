// should sort any collection of three strings
#include <iostream>
#include <string>

int main() {
  int counter = 0;

  std::cout << "Enter three names:\n";
  std::string input = "";

  std::string first = "";
  std::string second = "";
  std::string third = "";

  while (std::cin >> input) {
    ++counter;

    if (input > first) {
      third = second;
      second = first;
      first = input;
    } else if (input > second) {
      third = second;
      second = input;
    } else {
      third = input;
    }

    if (counter == 3) {
      break;
    }
  }

  std::cout << "sorted: " << third << ", " << second << ", " << first << ".\n";
}
