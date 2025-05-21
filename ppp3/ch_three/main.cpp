#include <iostream>

int main() {
  int largest = 0;
  int smallest = 0;

  std::cout << "enter a number\n";

  for (int i = 0; std::cin >> i;) {
    if (i >= largest) {
      smallest = largest;
      largest = i;
      std::cout << "largest so far\n";
    }

    if (i <= smallest) {
      smallest = i;
      std::cout << "smallest so far\n";
    }
  }
}
