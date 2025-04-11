#include <iostream>

int main() {
  std::cout << "Please enter your first name and age (then press ENTER):\n";

  // initialize variables with appropriate values
  std::string first_name = "????";
  int age = -1;

  // read into first_name before age
  std::cin >> first_name >> age;

  std::cout << "Hello, " << first_name << " (age " << age << ")\n";
}
