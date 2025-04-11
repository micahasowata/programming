#include <iostream>

int main() {
  std::cout << "Please enter your first name (then press the enter key):\n";
  std::string first_name;
  std::cin >> first_name;  // read user input into first_name object
  std::cout << "Hello, " << first_name << "!\n";
}
