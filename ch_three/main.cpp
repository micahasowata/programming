#include <iostream>

int main() {
  constexpr int alphabet_size = 26;

  int i = 0;
  while (i < alphabet_size) {
    std::cout << char('a' + i) << "\t" << int('a' + i) << "\n";
    ++i;
  }
}
