#include <iostream>

int main() {
  std::cout << "Please enter your first name (then press ENTER):\n";
  std::string first_name;
  std::cin >> first_name;

  std::cout << "Hello, " << first_name << "!\n";
}
