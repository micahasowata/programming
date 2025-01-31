#include <iostream>

// goal: direct a computer to the upstairs bathroom
// assumptions: it understands commands like "climb" and "open the door", it
// understands direction pointers like "right" and "left" and it is going from
// the dinning table to the upstairs bathroom
int main() {
  std::cout << "walk from the dinning table to the double doors that lead to "
               "the corridor\n";
  std::cout << "turn right and walk to the flight of stairs you see\n";
  std::cout << "climb the stairs till you get upper floor\n";
  std::cout << "walk towards the door directly in front of you\n";
  std::cout << "the door directly to the west is the bathroom door\n";
  std::cout << "walk in and use it\n";
  return 0;
}
