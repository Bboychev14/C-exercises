#include <iostream>
#include <array>

using namespace std;

auto ReturnArrayWithLargestSum(const array<array<double, 8>, 8>& arr) -> const array<double, 8>*;

int main()
{
    array<array<double, 8>, 8> arr = {
        { {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0},
          {9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0, 16.0},
          {17.0, 18.0, 19.0, 20.0, 21.0, 22.0, 23.0, 24.0},
          {25.0, 26.0, 27.0, 28.0, 29.0, 30.0, 31.0, 32.0},
          {33.0, 34.0, 35.0, 36.0, 37.0, 38.0, 39.0, 40.0},
          {41.0, 42.0, 43.0, 44.0, 45.0, 46.0, 47.0, 48.0},
          {49.0, 50.0, 51.0, 52.0, 53.0, 54.0, 55.0, 56.0},
          {57.0, 58.0, 59.0, 60.0, 61.0, 62.0, 63.0, 64.0} }
    };

    const array<double, 8>* result = ReturnArrayWithLargestSum(arr);
    for (double num : *result)
    {
        cout << num << ' ';
    }

    return 0;
}

auto ReturnArrayWithLargestSum(const array<array<double, 8>, 8>& arr) -> const array<double, 8>*
{
    const array<double, 8>* largestArr = &arr[0];
    double sum = 0;

    for (const auto& subArr : arr)
    {
        double tempSum = 0;
        for (double num : subArr)
        {
            tempSum+= num;
        }
        if (tempSum > sum)
        {
            sum = tempSum;
            largestArr = &subArr;
        }
    }
    return largestArr;
}