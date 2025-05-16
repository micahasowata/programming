#include <cmath>
#include <iostream>

int main() {
  std::cout << "Please enter a number:\n";
  int n = 0.0;

  std::cin >> n;

  std::cout << "n = " << n << "\nn + 1 = " << n + 1 << "\n3n = " << 3 * n
            << "\ntwice n = " << n + n << "\nn squared = " << n * n
            << "\nhalf of n = " << n / 2 << "\nn modulo 2 = " << n % 2
            << "\nsquare root of n = " << std::sqrt(n) << "\n";
}
