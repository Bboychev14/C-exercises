#include <iostream>
#include <vector>
#include <string>
#include <array>

template<typename Container>
typename Container::value_type FindMaxEl(const Container& container)
{
    typename Container::value_type result = container.front();
    for (const auto& el : container)
    {
        if (el > result)
        {
            result = el;
        }
    }
    return result;
}

int main()
{
    std::vector<int> v1 = {9, 1, 4, -101, 14};
    std::vector<std::string> v2 = {"a", "asd", "zqwr"};
    std::vector<char> v3 = {'a', 'z', 'c'};
    std::array<int, 4> arr1 = {-10, 2, 1, 19};
    std::array<std::string, 3> arr2 = {"a", "asd", "zqwr"};
    std::array<char, 3> arr3 = {'a', 'z', 'c'};

    size_t v1Size = sizeof(v1);
    size_t v2Size = sizeof(v2);
    size_t v3Size = sizeof(v3);
    std::cout << FindMaxEl(v1) << std::endl;
    std::cout << FindMaxEl(v2) << std::endl;
    std::cout << FindMaxEl(v3) << std::endl;

    std::cout << FindMaxEl(arr1) << std::endl;
    std::cout << FindMaxEl(arr2) << std::endl;
    std::cout << FindMaxEl(arr3) << std::endl;
}

//Works only with vectors!
/* template <typename T>
T FindMaxEl(const std::vector<T>& vec)
{
    T result = {};
    for (const auto& el : vec)
    {
        if (el > result)
        {
            result = el;
        }
    }
    return result;
} */


/* The same as the one above but with arr instead of vector.
template <typename T>
T FindMaxEl(const T* arr, size_t size)
{
    if (size < 1)
    {
        throw std::invalid_argument("The container is empty!");
    }
    T maxEl = arr[0];
    for (size_t i = 1; i < size; ++i)
    {
        if (arr[i] > maxEl)
        {
            maxEl = arr[i];
        }
    }
    return maxEl;
} */