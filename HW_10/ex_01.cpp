#include <iostream>

using namespace std;

bool CompareTwoArrays
(const float arr1[][3], const float arr2[][3], size_t rows, size_t cols, float error = 0.001);

int main()
{
    const size_t rows = 3;
    const size_t cols = 3;

    float arr1[rows][cols] = {
        {1.1f, 2.2f, 3.3f},
        {4.4f, 5.5f, 6.6f},
        {7.7f, 8.8f, 9.9f}
    };

    float arr2[rows][cols] = {
        {1.1f, 2.1f, 3.3f},
        {4.4f, 5.5f, 6.6f},
        {7.7f, 8.8f, 9.9f}
    };
    cout << CompareTwoArrays(arr1, arr2, rows, cols);
    return 0;
}

bool CompareTwoArrays
(const float arr1[][3], const float arr2[][3], size_t rows, size_t cols, float error)
{
    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < cols; ++j)
        {
            if (abs(arr1[i][j] - arr2[i][j]) > error)
            {
                return false;
            }
        }
    }
    return true;
}