#include <iostream>
using namespace std;
int main() {
  cout << "Miles to kilometers converter.\n";
  cout << "How many miles did you travel?\n";
  double miles{0.0};
  cin >> miles;

  double km{miles * 1.609};
  cout << "You travelled about " << km << " kilometers.\n";
}
