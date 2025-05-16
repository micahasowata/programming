// should produce a personalized letter
#include <iostream>
#include <stdexcept>
#include <string>

int main() {
  std::cout << "Enter the name of the person you want to write to:\n";
  std::string first_name = "";
  std::cin >> first_name;

  std::cout << "Enter the name of a mutual friend:\n";
  std::string friend_name = "";
  std::cin >> friend_name;

  std::cout << "How old is " << first_name << "?\n";
  int age = 0;
  std::cin >> age;

  if (age <= 0 || age >= 110) {
    throw std::runtime_error{"you're kidding!"};
  }

  std::cout << "\tDear " << first_name << ",\n\n";
  std::cout << "\tHow are you? I am fine. I miss you.\n";
  std::cout << "\tI usually would have sent you a WhatsApp message or dm'ed on "
               "IG but a letter sounded cooler so here we are.\n\n";

  std::cout << "\tHave you seen " << friend_name << " lately?\n\n";

  if (age < 12) {
    std::cout << "\tNext year you will be " << age + 1 << "\n";
  }

  if (age == 17) {
    std::cout << "\tNext year you will be able to vote.\n";
  }

  if (age > 70) {
    std::cout << "\tAre you retired?\n";
  }

  std::cout << "\n";

  std::cout << "\tYours sincerely,\n\n";
  std::cout << "\tMicah Asowata.\n";
}
