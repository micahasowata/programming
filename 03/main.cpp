#include <iostream>

int main() {
  int counter = 0;

  while (counter < 26) {
    std::cout << char('a' + counter) << "\t" << 'a' + counter << '\n';
    ++counter;
  }
}
