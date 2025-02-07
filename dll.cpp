#include <cstdio>

struct Element {
  Element *future{};
  Element *previous{};

  void insert_previous(Element *for_previous) {
    this->previous = for_previous; // put for_previous behind this
    for_previous->future = this;   // make this the future of for_previous
  }

  void insert_future(Element *for_future) {
    this->future = for_future;   // make for_future the future of this
    for_future->previous = this; // set this to be the past of for_future
  }

  void set_num(int n) {
    if (n <= 0) {
      a_num = 23;
    }

    a_num = n;
  }

  int get_num() const { return a_num; }

private:
  int a_num{};
};

int main() {
  Element one, two, three;

  // all previous and future are null;
  one.set_num(10);
  two.set_num(20);
  three.set_num(30);

  // three future - null
  // three previous - two
  //
  // two future - three
  // two previous - null
  three.insert_previous(&two);

  // two previous - one
  // two future - three
  //
  // one previous - null
  // one future - two
  two.insert_previous(&one);

  // traverse forward
  // should give me -> 10, 20, 30
  for (Element *cursor = &one; cursor; cursor = cursor->future) {
    printf("%d\n", cursor->get_num());
  }

  // traverse backward
  // should give me -> 30, 20, 10
  for (Element *cursor = &three; cursor; cursor = cursor->previous) {
    printf("%d\n", cursor->get_num());
  }
}
