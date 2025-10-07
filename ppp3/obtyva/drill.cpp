#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter the name of the person you want to write to:\n";
    std::string first_name;
    std::cin >> first_name;

    std::cout << "How old is " << first_name << "?\n";
    int age = 0;
    std::cin >> age;

    if (age <= 0 || age >= 110)
    {
        std::cerr << "Seven hells, you cannot be serious.\n";
        exit(1);
    }

    std::cout << "Enter the name of a mutual friend\n";
    std::string mutual;
    std::cin >> mutual;

    std::cout << "\tPrince " << first_name << " of House Martell,\n";
    std::cout << "\tThe North remembers, as I am certain Dorne does not forget. Our houses have had little cause to write in times past—your sands are far from our snows, your sun distant from our cold. Yet the world has grown smaller in these dark days, and old distances matter less when the enemies we face care nothing for the words of our houses or the lands we hold\n";
    std::cout << "\tThe Starks have ruled in the North for eight thousand years, and in all that time, we have learned this: when the long night falls, it matters not whether a man kneels in snow or sand. The dead care nothing for our banners.\n";
    std::cout << "\tHave you seen " << mutual << " Lannister lately?\n";
    std::cout << "\tI heard from the birds that you are " << age << " years old.\n";
    if (age < 12)
    {
        std::cout << "\tNext year you will be " << age + 1 << ".\n";
    }

    if (age == 17)
    {
        std::cout << "\tNext year you will be able to vote.\n";
    }

    if (age > 70)
    {
        std::cout << "\tAre you retired?\n";
    }

    std::cout << "\tWinter is coming. 🐺\n\n\n";
}