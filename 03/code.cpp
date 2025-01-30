#include <iostream>
using namespace std;
int main() {
  cout << "What is your first name?\n";
  string first_name{""};
  cin >> first_name;

  cout << "What is the first name of the recipient?\n";
  string recipient{""};
  cin >> recipient;

  cout << "What is the name of a mutual friend?\n";
  string mutual{""};
  cin >> mutual;

  cout << "How old is " << mutual << "?\n";
  int age{0};
  cin >> age;
  // ensure valid age
  if (age < 0 || age > 110) {
    cerr << "you're kidding!\n";
    return 1;
  }

  cout << "Dear " << recipient << ",\n";
  cout << "\tHow are you? I am fine. I miss you.\n";
  cout << "\tLife has  being great lately and I just want to bring you up to "
          "speed with what I am doing. I have decided to become a quant, which "
          "is short for quantitative, because it is best intersection of "
          "computers, maths (which I just discovered I really like) and "
          "finance.\n";
  cout << "\tI am watching more interviews and actively making lifestyle "
          "choices to have more time to work because I know with my background "
          "I would need a lot of work to get into any major firms. I am doing "
          "maths and learning c++ but I eventually want to start working on "
          "compilers (especially one for C++) because there is a lot of deep "
          "learning necessary to understand and optimize them.\n";
  cout << "\tHave you seen " << mutual
       << " lately? I haven't heard from since school but I would really love "
          "to reconnect so if you do meet them let me know.\n";
  cout << "\tI hear you just had a birthday and you are " << age
       << " years old.\n";
  if (age < 12) {
    cout << "\tNext year you would be " << age + 1 << '\n';
  } else if (age == 17) {
    cout << "\tNext year will be able to vote.\n";
  } else if (age > 70) {
    cout << "\tAre you retired? 😉\n";
  }

  cout << "\t\t\t\t\t\t\t\t\t\tYours Sincerely,\n\n\n";
}
