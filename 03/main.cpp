#include <iostream>

int square(int x) {
  if (x == 0 || x == 1) {
    return x;
  } else {
    int result = 0;
    for (int i = 1; i <= x; ++i) {
      result += x;
    }
    return result;
  }
}

int main() {
  for (int counter = 0; counter < 100; ++counter) {
    std::cout << counter << '\t' << square(counter) << '\n';
  }
}
