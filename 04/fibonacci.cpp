#include <iostream>
#include <stdexcept>
#include <vector>

// Fibonacci sequence
// see more: https://en.wikipedia.org/wiki/Fibonacci_sequence

void error(std::string message) {
  throw std::runtime_error{"error: " + message + '\n'};
}

std::vector<int> generate_sequence(int limit) {
  if (limit < 0) {
    error("limit must be non-negative");
  }

  std::vector<int> sequence = {};

  int n_minus_one = 1;
  int n_minus_two = 0;

  for (int i = 0; i < limit; ++i) {
    // fn is the current number F<sub>n</sub>
    int fn = 0;

    if (i == 0 || i == 1) {
      fn = i;
    } else {
      fn = n_minus_one + n_minus_two;

      n_minus_two = n_minus_one;
      n_minus_one = fn;
    }

    sequence.push_back(fn);
  }

  return sequence;
}

int main() {
  std::cout << "How many numbers do you want to generate?\n";
  int limit = 0;

  if (std::cin >> limit) {
    try {
      std::vector<int> sequence = generate_sequence(limit);

      for (int n : sequence) {
        std::cout << n << '\n';
      }
    } catch (std::exception& e) {
      std::cerr << e.what();
    }
  } else {
    std::cerr << "exiting...\n";
  }
}
