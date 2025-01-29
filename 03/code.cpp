#include <iostream>
using namespace std;
int main() {
  cout << "what is your first name? (press enter after response)\n";
  string first_name;
  cin >> first_name;

  cout << "how old are you? (press enter after response)\n";
  int age;
  cin >> age;

  cout << first_name << " is " << age << " years old\n";
}
