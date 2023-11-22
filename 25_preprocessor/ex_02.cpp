#define IS_EVEN(x) (((x) % (2)) == (0))
#define IS_ODD(x) (((x) % (2)) != (0))

#include <iostream>

int main()
{
    int a = 2;
    int b = 3;
    std::cout << IS_EVEN(a) << "    " << IS_ODD(a) << std::endl;
    std::cout << IS_EVEN(b) << "    " << IS_ODD(b) << std::endl;

    return 0;

}