#include <iostream>
#include <stdexcept>
#include <string>

// generate a letter from user input
int main() {
  std::cout << "Enter the name of the person you want to write to (then press "
               "ENTER):\n";
  std::string first_name = "";
  std::cin >> first_name;

  std::cout << "Enter the name of a mutual friend with the recipient (then "
               "press ENTER):\n";
  std::string friend_name = "";
  std::cin >> friend_name;

  std::cout << "How old is the recipient? (then press ENTER):\n";
  int age = 0;
  std::cin >> age;

  if (age <= 0 || age >= 110) {
    throw std::runtime_error("are you kidding?");
  }

  std::cout << "\n\n";

  std::cout << "\tDear " << first_name << ",\n";
  std::cout << "\tHow are you, dummy? I don't miss you. I just think it would "
               "be nice if you showed up.\n";
  std::cout << "\tI am writing this letter with C++ and listening to Tyler, "
               "The Creator's NEW MAGIC WAND. I wonder why he capitalizes song "
               "titles, maybe it is for the same reasons that Billie Eillish "
               "makes her song titles lowercased.\n";
  std::cout << "\tHave you seen " << friend_name << " lately?\n";
  std::cout << "\tI hear you just had a birthday and you are " << age
            << " years old\n";
  if (age < 12) {
    std::cout << "\tNext year you will be " << age + 1 << ".\n";
  }

  if (age == 17) {
    std::cout << "\tNew year you will be able to vote.\n";
  }

  if (age > 70) {
    std::cout << "\tAre you retired?\n";
  }

  std::cout << "\tYours sincerely,\n";
  std::cout << "\n\n";
  std::cout << "\tMicah Asowata.\n";
}
