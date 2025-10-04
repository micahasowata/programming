#include <iostream>
#include <string>

// This program should accept name and age as input and provide a response containing such information
int main()
{
    std::cout << "Please enter your first name and age\n";

    std::string first_name = "";
    double age = 0.0;

    std::cin >> first_name >> age;
    std::cout << "Hello, " << first_name << " (age: " << age * 12 << " months old).\n";
}