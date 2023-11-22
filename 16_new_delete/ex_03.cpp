#include <iostream>

int* DealocateNumbers(int*& ptr, int currSize, int newSize);

int main()
{
    int* numbers1 = new int[5]{1, 2, 3, 4, 5};
    std::cout << "Starting numbers:";
    for (int i = 0; i < 5; ++i)
    {
        std::cout << numbers1[i] << ' ';
    }
    std::cout << "\n";

    int* nums2 = DealocateNumbers(numbers1, 5, 10);
    for (int i = 0; i < 10; ++i)
    {
        std::cout << nums2[i] << ' ';
    }
    delete[] nums2;
    nums2 = nullptr;

    return 0;

}

int* DealocateNumbers(int*& ptr, int currSize, int newSize)
{
    int* nums = new int[newSize]{};
    for (int i = 0; i < currSize; ++ i)
    {
        nums[newSize - i - 1] = ptr[currSize - i - 1];
    }   
    delete[] ptr;
    ptr = nullptr;
    return nums;
}