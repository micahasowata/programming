#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

// check if a number is prime or not
bool is_prime(int x) {
  // 2 is first prime
  if (x == 1 || x == 2 || x == 3) {
    return true;
  }

  int root = std::sqrt(x);

  // i should be between (2, root]
  for (int i = 2; i <= root; ++i) {
    if (x % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  std::cout << "enter an upper limit:\n";
  int input = 0;
  std::cin >> input;

  std::vector<int> primes = {};

  for (int i = 1; i <= input; ++i) {
    if (is_prime(i)) {
      primes.push_back(i);
    }
  }

  std::sort(primes.begin(), primes.end());

  for (int i : primes) {
    std::cout << i << '\n';
  }
}
