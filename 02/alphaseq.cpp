#include <iostream>
#include <string>

// sequencer with tweaks to accept strings
int main() {
  int counter = 0;

  std::cout << "Enter three names:\n";
  std::string value = "";

  std::string first = "";
  std::string second = "";
  std::string third = "";

  while (std::cin >> value) {
    counter++;

    if (value >= first) {
      third = second;
      second = first;
      first = value;

    } else if (value >= second) {
      third = second;
      second = value;

    } else {
      third = value;
    }

    if (counter == 3) {
      break;
    }
  }

  std::cout << third << ", " << second << ", " << first << ".\n";
}
