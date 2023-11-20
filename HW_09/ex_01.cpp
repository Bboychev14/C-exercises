#include <iostream>

using namespace std;

bool IsSorted(const int * ptr, int size);

int main()
{
    int numbers[] = {0, 4, 7, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    cout << IsSorted(numbers, size);
    return 0;
}

bool IsSorted(const int * ptr, int size)
{
    const int* end = ptr + size - 1; // probably should be -2
    while (ptr != end)
    {
        if (*ptr > *(ptr + 1))
        {
            return false;
        }
        ptr ++;
    }
    return true;
}
