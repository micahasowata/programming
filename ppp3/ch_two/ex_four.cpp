// should sort any collection of three integer values
#include <iostream>

int main() {
  int counter = 0;
  std::cout << "Enter three integers:\n";
  int input = 0;

  int first = 0;
  int second = 0;
  int third = 0;

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
