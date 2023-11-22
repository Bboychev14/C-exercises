#include <iostream>

void EnlargeArrCapacity(int*&, int& cap);

int main()
{
    int num = 0;
    int size = 0;
    int capacity = 1;
    int* numbers = new int[1];
    while (std::cin >> num && num > 0)
    {
        if (size == capacity)
        {
            EnlargeArrCapacity(numbers, capacity);
        }
        numbers[size] = num;
        ++size;
    }

    std::cout << "These are you'r numbers" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << numbers[i] << ' ';
    }
}

void EnlargeArrCapacity(int*& arr, int& cap)
{
    int newCap = cap * 2;
    int* newArr = new int[cap]{};
    for (int i = 0; i < cap; ++i)
    {
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
    cap = newCap;
}