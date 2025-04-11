#include <iostream>

// read user name and age (in years) then output the name and age (in months)
int main() {
  std::cout << "Please enter your first name (then press ENTER) and age (then "
               "press ENTER):\n";

  std::string first_name = "????";
  double age = 0.0;

  std::cin >> first_name >> age;

  std::cout << "\nHello, " << first_name << " (age " << age * 12
            << " months)!\n";
}
