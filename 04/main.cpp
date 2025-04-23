#include <exception>
#include <iostream>
#include <vector>

int main() {
  try {
    std::cout << "Success!\n";

    return 0;
  } catch (std::exception& e) {
    std::cerr << "error: " << e.what() << '\n';
    return 1;
  }
}
