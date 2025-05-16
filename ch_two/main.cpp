#include <iostream>

int main() {
  std::cout << "Please enter name and age (in years):\n";
  std::string name = "";
  double age = 0.0;

  std::cin >> name;
  std::cin >> age;

  std::cout << "Hello, " << name << " you are " << age * 12 << " months old\n";
}
