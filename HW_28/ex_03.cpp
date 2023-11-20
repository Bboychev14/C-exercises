#include <iostream>

template<typename T, typename U>
struct Point2d
{
    Point2d(const T&& pp1, const U&& pp2) : p1(pp1), p2(pp2) {}
    T p1;
    U p2;
};

int main()
{
    Point2d<double, int> v(2.2, 10);
    Point2d<int, float> v2(101, 1.7);
    std::cout << v.p1 << "    " << v.p2 << std::endl;
    std::cout << v2.p1 << "    " << v2.p2 << std::endl;

}