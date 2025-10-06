#include <iostream>
#include <string>

int main()
{
    // prepare two containers to hold the words that would be inputted
    std::string previous;
    std::string current;

    // keep the stream open indefinitely
    while (std::cin >> current)
    {
        std::cout << "previous: " << previous << '\n';
        std::cout << "current: " << current << '\n';
        std::cout << '\n';

        if (previous == current) // check for repetition
        {
            std::cout << "repeated word: " << current << '\n';
        }
        previous = current; // always update the previous value with each new input
    }
}