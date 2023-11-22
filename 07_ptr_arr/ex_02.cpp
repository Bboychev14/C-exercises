#include <iostream>

using namespace std;

void ReverseArray(int* leftPtr, int size);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int *ptr = numbers;
    ReverseArray(numbers, size);
    while (ptr < &numbers[size])
    {
        cout << *ptr << " ";
        ptr ++;
    }
    return 0;
}

void ReverseArray(int* leftPtr, int size)
{
    int* rightPtr = leftPtr + size - 1;
    int temp = 0;
    for (; leftPtr < rightPtr; leftPtr++, rightPtr--)
    {
        temp = *leftPtr;
        *leftPtr = *rightPtr;
        *rightPtr = temp;
    }

}