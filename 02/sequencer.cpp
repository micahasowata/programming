#include <iostream>

// sort three random values and sorts them numerically
int main() {
  int counter = 0;

  std::cout << "Enter three numbers:\n";
  int value = 0;

  int first = 0;
  int second = 0;
  int third = 0;

  // algorithm:
  // for each value, check if it is greater than first then
  // make the current value of second the new value of third and
  // the current value of first the new value for second before setting the
  // value into first
  //
  // if it less than second, just do the "shifting" between second and third
  // before setting the new value for second
  while (std::cin >> value) {
    counter++;

    if (value >= first) {
      third = second;
      second = first;
      first = value;

    } else if (value >= second) {
      third = second;
      second = value;
    }

    if (counter == 3) {
      break;
    }
  }

  std::cout << third << ", " << second << ", " << first << ".\n";
}
