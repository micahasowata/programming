// should implement a finance report for US coins 1 dollar and below
#include <iostream>
int main() {
  std::cout << "Look in your wallet.\n";

  std::cout << "How many pennies do you have?\n";
  int pennies = 0;
  std::cin >> pennies;

  std::cout << "How many nickels do you have?\n";
  int nickels = 0;
  std::cin >> nickels;

  std::cout << "How many dimes do you have?\n";
  int dimes = 0;
  std::cin >> dimes;

  std::cout << "How many quarters do you have?\n";
  int quarters = 0;
  std::cin >> quarters;

  std::cout << "How many half-dollar (50 cent) do you have?\n";
  int half_dollar = 0;
  std::cin >> half_dollar;

  std::cout << "How many dollar do you have?\n";
  int dollar = 0;
  std::cin >> dollar;

  if (pennies > 1) {
    std::cout << "You have " << pennies << " pennies\n";
  } else if (pennies == 1) {
    std::cout << "You have " << pennies << " penny\n";
  }

  if (nickels > 1) {
    std::cout << "You have " << nickels << " nickels\n";
  } else if (nickels == 1) {
    std::cout << "You have " << nickels << " nickel\n";
  }

  if (dimes > 1) {
    std::cout << "You have " << dimes << " dimes\n";
  } else if (dimes == 1) {
    std::cout << "You have " << dimes << " dime\n";
  }

  if (quarters > 1) {
    std::cout << "You have " << quarters << " quarters\n";
  } else if (quarters == 1) {
    std::cout << "You have " << quarters << " quarter\n";
  }

  if (half_dollar > 1) {
    std::cout << "You have " << half_dollar << " half dollars\n";
  } else if (half_dollar == 1) {
    std::cout << "You have " << half_dollar << " half dollar\n";
  }

  if (dollar > 1) {
    std::cout << "You have " << dollar << " dollars\n";
  } else if (dollar == 1) {
    std::cout << "You have " << dollar << " dollar\n";
  }

  double total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) +
                 (quarters * 0.25) + (half_dollar * 0.50) + dollar;

  std::cout << "total: " << total << "\n";
}
