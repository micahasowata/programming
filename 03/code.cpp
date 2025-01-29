#include <iostream>
using namespace std;
int main() {
  cout << "what is your first name? (press enter after response)\n";
  string first_name = "";
  cin >> first_name;

  cout << "how old are you? (press enter after response and can be decimal)\n";
  double age = 0;
  cin >> age;

  cout << first_name << " is " << age * 12 << " months old\n";
}
