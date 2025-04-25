#include <exception>
#include <iostream>
#include <stdexcept>

constexpr double kelvin = 273.15;
constexpr double negative_kelvin = kelvin * -1;

void error(std::string message) {
  throw std::runtime_error{"error: " + message + '\n'};
}

// convert temperature from celsius to kelvin
double ctok(double celsius_temp) {
  if (celsius_temp < negative_kelvin) {
    error("temperature is lower than absolute zero.");
  }

  return celsius_temp + kelvin;
}

// convert temperature from kelvin to celsius
double ktoc(double kelvin_temp) {
  if (kelvin_temp < 0) {
    error("temperature below absolute zero");
  }

  return kelvin_temp - kelvin;
}

int main() {
  std::cout << "enter a temperature (symbol is either c or k)?\n";
  double input_temp = 0.0;
  char symbol = 0;

  if (std::cin >> input_temp >> symbol) {
    try {
      switch (symbol) {
        case 'c':
          std::cout << input_temp << "c = " << ctok(input_temp) << "k\n";
          break;
        case 'k':
          std::cout << input_temp << "k = " << ktoc(input_temp) << "c\n";
          break;
        default:
          std::cerr << symbol << " is not supported\n";
      }
    } catch (std::exception& e) {
      std::cerr << e.what();
    }
  } else {
    std::cout << "exiting...\n";
  }
}
