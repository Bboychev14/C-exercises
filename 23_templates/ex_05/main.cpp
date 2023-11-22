#include "SharedPtr.h"
#include <iostream>

int main()
{
    //INT
    SharedPtr sp1(14);
    std::cout << sp1.GetReffCount() << std::endl;
    SharedPtr sp2 = sp1;
    std::cout << sp2.GetReffCount() << ' ' << sp1.GetReffCount() << std::endl;
    {
        SharedPtr sp3 = sp1;
        std::cout << sp2.GetReffCount() << ' ' << sp1.GetReffCount() << ' ' << sp3.GetReffCount() << std::endl;
    }
    std::cout << sp1.GetReffCount() << std::endl;

    // STRING
    SharedPtr ssp1("asd");
    std::cout << ssp1.GetReffCount() << std::endl;
    SharedPtr ssp2 = ssp1;
    std::cout << ssp2.GetReffCount() << ' ' << ssp1.GetReffCount() << std::endl;
    {
        SharedPtr ssp3 = ssp1;
        std::cout << ssp2.GetReffCount() << ' ' << ssp1.GetReffCount() << ' ' << ssp3.GetReffCount() << std::endl;
    }
    std::cout << ssp1.GetReffCount() << std::endl;
    
    
}