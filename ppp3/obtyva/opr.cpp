#include <iostream>

int main()
{
    // Testing the claim that:
    // The definitions of integer ∗, /, and % guarantee that for two positive ints a and b we have a/b ∗ b + a%b == a.
    int a = 7;
    int b = 2;

    std::cout << a / b * b + a % b; // should be the value of a

    // this expression resolves to a + a % b because
    // a / b * b is a since the b would cancel out each other
    // for a + a % b == a to be true then a % b has to equal 0
    // and 7 modulo 2 == 1
    // unless it resolves as
    // 7/2 = 3.5 (3 because of integer truncation) multiplied by 2 resulting in 6
    // then adding that to 7 % 2. That results in 7.
    // The mathematical and the programming interpretations defer because of the constraints of their environments
}