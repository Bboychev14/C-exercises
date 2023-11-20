#include <iostream>
#include <string>

template<typename T, size_t N>
size_t ReturnArrSize(const T(&)[N])
{
    return N;
}

int main()
{
    int arr1[] = {31, 22, 412, -21, 231231, 1412};
    char arr2[] = {'s', 'w', 'p', 'g'};
    double arr3[] = {2.2, 1.4, 9.4, 33.12, 9};
    std::cout << ReturnArrSize(arr1) << "    " << ReturnArrSize(arr2) << "    " << ReturnArrSize(arr3);

    return 0;

}