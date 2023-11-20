#define SWAP(a, b) \
    {\
    auto temp = (a); \
    (a) = (b); \
    (b) = temp; \
    }

#include <iostream>

int main()
{
    int num1 = 1;
    int num2 = 14;
    SWAP(num1, num2);
    std::cout << num1 << "   " << num2;

    return 0;

}