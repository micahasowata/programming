#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

bool is_prime(int x) {
  if (x == 2) {
    return true;
  }

  if (x <= 1 || x % 2 == 0) {
    return false;
  }

  int root = std::sqrt(x);

  for (int i = 3; i <= root; ++i) {
    if (x % i == 0) {
      return false;
    }
  }

  return true;
}

// sieve of eratosthenes
std::vector<int> s_of_e(int limit) {
  std::vector<int> initial = {};
  for (int i = 2; i <= limit; ++i) {
    initial.push_back(i);
  }

  int root = std::sqrt(limit);

  std::vector<int> divisors = {};

  for (int i = 0; i <= root; ++i) {
    if (is_prime(i)) {
      divisors.push_back(i);
    }
  }

  for (int i : divisors) {
    for (int x : initial) {
      if (x % i == 0) {
        initial.erase(std::remove(initial.begin(), initial.end(), x),
                      initial.end());
      }
    }
  }

  return initial;
}

int main() {
  auto v = s_of_e(10'000);
  std::cout << "length: " << v.size() << "\n";
}
