#include <iostream>

// converts Japanese Yen, British Pounds, Norwegian Krone and Swiss Francs into
// appropriate United States Dollar value exchange rates: wise.com 15th, April
// 2025
int main() {
  constexpr double yen_to_dollar = 1 / 143.195;
  constexpr double krone_to_dollar = 1 / 10.6464;
  constexpr double pound_to_dollar = 1.3229;
  constexpr double francs_to_dollar = 1.2278;

  char currency = 0;
  double value = 0.0;

  std::cout << "Convert yen(y), pounds (p) or krone (k) into USD.\n";
  std::cout << "Enter a value followed by a currency symbol:\n";

  std::cin >> value >> currency;

  switch (currency) {
    case 'p':
      std::cout << value << " pounds = " << value * pound_to_dollar
                << " dollar(s).\n";
      break;
    case 'k':
      std::cout << value << " krone = " << value * krone_to_dollar
                << " dollar(s).\n";
      break;
    case 'y':
      std::cout << value << " yen = " << value * yen_to_dollar
                << " dollar(s).\n";
      break;
    case 'f':
      std::cout << value << " francs = " << value * francs_to_dollar
                << " dollar(s).\n";
      break;
    default:
      std::cout << currency << " is currently not supported.\n";
  }
}
