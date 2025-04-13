#include <iostream>

// note: char c outputs a value only between 33 and 125
int main() {
  double d = 0;
  while (std::cin >> d) {
    int i = d;
    char c = i;

    std::cout << "double d == " << d << "\nint i == " << i
              << "\nchar c == " << c << '\n';
  }
}
