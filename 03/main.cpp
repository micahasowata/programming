#include <iostream>
#include <string>

// converts Japanese Yen, British Pounds and Norwegian Krone into appropriate
// United States Dollar value exchange rates: wise.com 15th, April 2025
int main() {
  constexpr double yen_to_dollar = 1 / 143.195;
  constexpr double krone_to_dollar = 1 / 10.6464;
  constexpr double pound_to_dollar = 1.3229;

  std::string currency = "";
  double value = 0.0;

  std::cout << "Convert yen (y), pounds (p) or krone (k) into USD.\n";
  std::cout << "Enter a value followed by a currency (or its symbol):\n";

  std::cin >> value >> currency;

  if (currency == "p" || currency == "pounds") {
    std::cout << value << " " << currency << " = " << value * pound_to_dollar
              << " dollar(s).\n";
  } else if (currency == "k" || currency == "krone") {
    std::cout << value << " " << currency << " = " << value * krone_to_dollar
              << " dollar(s).\n";
  } else if (currency == "y" || currency == "yen") {
    std::cout << value << " " << currency << " = " << value * yen_to_dollar
              << " dollar(s).\n";
  } else {
    std::cout << currency << " is currently not supported.\n";
  }
}
