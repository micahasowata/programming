#include <iostream>

int main() {
  std::cout << "Please enter your first and second names:\n";
  std::string first;
  std::string second;

  std::cin >> first >> second;

  if (first > second) {
    std::cout << first << " is alphabetically after " << second << "\n";
  }

  if (first < second) {
    std::cout << first << " is lexically before " << second << "\n";
  }

  if (first == second) {
    std::cout << "so good they named you twice\n";
  }
}
