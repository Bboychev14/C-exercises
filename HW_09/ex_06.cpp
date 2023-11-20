#include <iostream>

using namespace std;

void PushArrayLeft(int * ptr, int size, int positions);

int main()
{
    int positions = 3;
    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    PushArrayLeft(numbers, size, positions);
    int * ptr = numbers;
    while (ptr < &numbers[size])
    {
        cout << *ptr << " ";
        ptr++;
    }

    return 0;
}

void PushArrayLeft(int * ptr, int size, int positions)
{
    for (int i = 0; i < positions; ++i)
    {
        int firsPtr = *ptr;
        for (int j = 0; j < size; ++j)
        {
            if (j != size - 1)
            {
                *(ptr + j) = *(ptr + j + 1);
            }
            else
            {
                *(ptr + j) = firsPtr;
            }
            
        }
    }
}