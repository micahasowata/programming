#include <cmath>
#include <iostream>

int main() {
  std::cout << "enter a number (then press ENTER):\n";
  int n = 0;
  std::cin >> n;
  std::cout << "n== " << n << "\nn+1 == " << n + 1
            << "\nthree times n == " << 3 * n << "\ntwice n == " << 2 * n
            << "\nn squared == " << n * n << "\nhalf of n == " << n / 2
            << "\nsquare root of n == " << std::sqrt(n)
            << "\nn modulo 2 == " << n % 2 << '\n';
}
