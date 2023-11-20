#include "SharedPtrInt.h"
#include <iostream>

int main()
{
    SharedPtrInt sp1(14);
    std::cout << sp1.GetReffCount() << std::endl;
    SharedPtrInt sp2 = sp1;
    std::cout << sp2.GetReffCount() << ' ' << sp1.GetReffCount() << std::endl;
    for (int i = 0; i < 1; ++i)
    {
        SharedPtrInt sp3 = sp1;
        std::cout << sp2.GetReffCount() << ' ' << sp1.GetReffCount() << ' ' << sp3.GetReffCount() << std::endl;
    }
    std::cout << sp1.GetReffCount();

}