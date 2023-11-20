#define DEG_TO_RAD(x) ((x) * ((3.14)/(180)))
#define RAD_TO_DEG(x) ((x) * ((180) / (3.14)))
#include <iostream>

int main()
{
    double ang1 = 45.0;
    double angRad1 = DEG_TO_RAD(ang1);
    std::cout << angRad1 << std::endl;
    double angDeg1 = RAD_TO_DEG(angRad1);
    std::cout << angDeg1;

    return 0;

}