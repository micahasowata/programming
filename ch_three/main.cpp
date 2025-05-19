#include <iostream>

int main() {
  constexpr int alphabet_size = 26;

  for (int i = 0; i < alphabet_size; ++i) {
    std::cout << char('a' + i) << "\t" << int('a' + i) << "\n";
  }
}
