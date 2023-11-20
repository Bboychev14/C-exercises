#include <iostream>
#include <cmath>
#include <vector>
// I dont realy have time to fix my code, so here's explanation of how I would do it.
/* Tottaly missunderstood the task. However as for the original task I would use vector<vector<Point>>;
I would push_back the first point on line1. From there I would iterate through every point and chek if it close
 enough to the points in the temp line. If its not We just make new line and push_back the temp Point.
This way at the end the size of the outer vector will be equal to the multitude of points.
 */
struct Point
{
    Point(double x, double y) : x(x), y(y) {}
    double x;
    double y;
};

int CountPoints(const std::vector<Point>& points, double distance);

int main()
{
    std::vector<Point> points = {Point(1.0, 2.0), Point(1.1, 2.2), Point(3.5, 6.5), Point(1.2, 2.3), Point(1.0, 3.5)};
    std::cout << CountPoints(points, 1.5);
}

int CountPoints(const std::vector<Point>& points, double distance)
{
    int result = 0;
    int n = points.size();

    auto func = [](const Point& p1, const Point& p2)
    {return pow((pow(p1.x-p2.x, 2) + pow(p1.y-p2.y,2)), 0.5); };

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            double tempDistance = func(points[i], points[j]);
            if (tempDistance <= distance)
            {
                ++result;
            }
        }
    }
    return result;
}