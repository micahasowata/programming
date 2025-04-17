#include <iostream>

int main() {
  for (int counter = 0; counter < 26; ++counter) {
    std::cout << char('a' + counter) << '\t' << 'a' + counter << '\n';
    std::cout << '\t' << char('A' + counter) << '\t' << 'A' + counter << '\n';
  }
}
