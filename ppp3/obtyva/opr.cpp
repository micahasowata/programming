#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter two names\n";

    std::string first;
    std::string second;

    std::cin >> first >> second;

    if (first > second)
    {
        std::cout << first << " lexicographically comes after " << second << '\n';
    }

    if (first == second)
    {
        std::cout << "that's the same name twice\n";
    }

    if (first < second)
    {
        std::cout << first << " alphabetically comes before " << second << '\n';
    }

    std::cout << "concat: " << first + second << '\n';
}