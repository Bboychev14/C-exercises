#include <iostream>
#include <vector>

template<typename T>
void PrintElements(const std::vector<T>& vec)
{
    for (const auto& el : vec)
    {
        std:: cout << el << ' ';
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v1 = {4, -11, 14};
    std::vector<std::string> v2 = {"asd", "qwrq", "zxcz", "opjopj"};
    std::vector<char> v3 = {'a', 'b', 'c', 's', 'q'};
    std::vector<double> v4 = {1.2, 4.1};
    PrintElements(v1);
    PrintElements(v2);
    PrintElements(v3);
    PrintElements(v4);

    return 0;

}