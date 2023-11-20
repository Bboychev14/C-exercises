#include <iostream>
#include <vector>
#include <algorithm>

struct Point
{
    Point (float x, float y) : m_x(x), m_y(y) {}
    float m_x;
    float m_y;

    float distanceOnSecondPower() const
    {
        return m_x * m_x + m_y * m_y;
    }
};

int main()
{
    std::vector<Point> points = {Point(7.5, 5.5), Point(3.0, 5.0), Point(-5.0, -6.0), Point(-1.5, 0.5)};

    std::sort(points.begin(), points.end(), [](const Point& p1, const Point& p2)
    {return p1.distanceOnSecondPower() < p2.distanceOnSecondPower();});

    for (auto iter = points.begin(); iter < points.end(); ++iter)
    {
        std::cout << iter->m_x << ' ' << iter->m_y << std::endl;
    }
}