#include <iostream>

// converts miles to kilometers
int main() {
  // get input
  std::cout << "How far (in miles) have you travelled this week? (then press "
               "ENTER)\n";
  double miles = 0.0;
  std::cin >> miles;

  // check input
  if (miles <= 0) {
    throw std::runtime_error("honestly, answer the question.");
  }

  // return output
  std::cout << "You have travelled " << miles * 1.609
            << " kilometers this week.\n";
}
