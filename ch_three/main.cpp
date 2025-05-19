#include <iostream>

// converts dollar to japanese yen, norwegian krone and british pounds
int main() {
  // rates are the result of 1 dollar / approximate amount of [current currency]
  // to one dollar
  constexpr double rate_to_yen = 1.0 / 145.0;
  constexpr double rate_to_nok = 1.0 / 10.0;
  constexpr double rate_to_pound = 1.0 / 0.8;
  constexpr double rate_to_francs = 1.0 / 0.83;

  std::cout << "Convert Norwegian Krone (k), Japanese Yen (y) , Swiss Francs "
               "(f) and British Pounds (p) to dollars:\n";

  std::cout
      << "How much do you want to convert today? (enter amount and symbol):\n";
  double amount = 0;
  char unit = ' ';
  std::cin >> amount >> unit;

  if (amount <= 0) {
    std::cout << "enter a valid amount\n";
    return 0;
  }

  switch (unit) {
  case 'k':
    std::cout << amount << " Krones = " << amount * rate_to_nok
              << " Dollars.\n";
    break;
  case 'y':
    std::cout << amount << " Yen = " << amount * rate_to_yen << " Dollars.\n";
    break;
  case 'p':
    std::cout << amount << " Pounds = " << amount * rate_to_pound
              << " Dollars.\n";
    break;
  case 'f':
    std::cout << amount << " Francs = " << amount * rate_to_francs
              << " Dollars.\n";
    break;
  default:
    std::cout << unit << " is not supported.\n";
  }
}
