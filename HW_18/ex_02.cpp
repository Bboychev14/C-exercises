#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> vec = {-3, -2, -1, 6, 19, 22, 71, 17};
    std::vector<int> vec1 = vec;
    std::vector<int> vec2 = vec;
    std::sort(vec1.begin(), vec1.end(), [](int num1, int num2) // I think we should use trailing return type here
    {
        if (num1 % 2 == 0 && num2 % 2 == 0)
        {
            return num1 < num2;
        }
        else if (num1 % 2 != 0 && num2 % 2 != 0)
        {
            return num1 > num2;
        }
        else
        {
            return num1 % 2 == 0;
        }
    });

    std::sort(vec2.begin(), vec2.end(), [](int num1, int num2)
    {
        if (num1 >= 0 && num2 >= 0)
        {
            return num1 > num2;
        }
        else if (num1 < 0 && num2 < 0)
        {
            return num1 < num2;
        }
        else
        {
            return num1 >= 0;
        }
    });

    for (auto it = vec1.begin(); it < vec1.end();++it)
    {
        std::cout << *it << ' ';
    }
    std::cout << std::endl << "Second vector" << std::endl;
    for (auto it = vec2.begin(); it < vec2.end(); ++it)
    {
        std::cout << *it << ' ';
    }

    return 0;

}