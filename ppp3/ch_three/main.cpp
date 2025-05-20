#include <iostream>
#include <vector>

int main() {
  std::vector<int> v = {5, 7, 9, 4, 6, 8};
  for (int x : v) {
    std::cout << x << "\n";
  }
}
