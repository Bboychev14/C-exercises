#include <iostream>

int main()
{
    int count = 0;
    int sum = 0;
    std::cout << "Enter the number of numbers: ";
    std::cin >> count;
    int* numbers = new int[count];
    
    for (int i = 0; i < count; ++i)
    {
        std::cin >> numbers[count - i - 1];
        sum += numbers[count - i - 1];
    }

    for (int i = 0; i < count; ++i)
    {
        std::cout << numbers[i] << ' ';
    }
    std::cout << sum;

    delete[] numbers;
    numbers = nullptr;
}