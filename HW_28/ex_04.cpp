#include <iostream>

template <typename T>
struct Point2d
{
    Point2d(const T&& pp1, const T&& pp2) : p1(pp1), p2(pp2) {}
    T p1;
    T p2;
};

template <typename T>
bool ComparePoint2d(const Point2d<T>& obj1, const Point2d<T>& obj2)
{
    if (obj1.p1 > obj2.p1 && obj1.p2 > obj2.p2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <>
bool ComparePoint2d(const Point2d<float>& obj1, const Point2d<float>& obj2)
{
    if (obj1.p1 > obj2.p1 && obj1.p2 > obj2.p2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Point2d v(2.7, 17.3);
    Point2d v2(2.2, 10.4);
    std::cout << ComparePoint2d(v, v2) << std::endl;
    
    Point2d v3(1, 2);
    Point2d v4(12, 13);
    std::cout << ComparePoint2d(v3, v4) << std::endl;
}