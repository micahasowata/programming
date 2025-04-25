#include <exception>
#include <iostream>
#include <stdexcept>

constexpr double kelvin = 273.15;
constexpr double negative_kelvin = kelvin * -1;

void error(std::string message) {
  throw std::runtime_error{"error: " + message + '\n'};
}

double ctok(double temp) {
  if (temp < negative_kelvin) {
    error("temperature is lower than absolute zero.");
  }

  return temp + kelvin;
}

int main() {
  std::cout << "what is current temperature where you live?\n";
  double input_temp = 0.0;

  if (std::cin >> input_temp) {
    try {
      double kelvin_temp = ctok(input_temp);
      std::cout << input_temp << "c = " << kelvin_temp << "k\n";

    } catch (std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  } else {
    std::cout << "exiting...\n";
  }
}
