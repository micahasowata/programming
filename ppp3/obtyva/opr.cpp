#include <iostream>
#include <string>

int main()
{
    int age = -1;
    std::cin >> age;

    std::string name;
    std::cin >> name;

    int a2 = age + 2;
    std::string n2 = name + " Jr.";

    std::cout << n2 << ", " << a2 << "\n";

    int a3 = age + 2;
    std::string n3 = name - " Jr.";
}