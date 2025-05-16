#include <iostream>

int main() {
  std::cout << "Please enter age and name:\n";

  std::string name = "????";
  int age = -1;

  std::cin >> age;
  std::cin >> name;

  std::cout << age << " " << name << "\n";
}
