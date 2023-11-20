#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

//Copied this function from the presentation.
void long_operation();

int GenerateRandomNumber(int min, int max);

void FillArray(array<int, 10>& arr, int min, int max);

int main()
{
    array<int, 10> arr;
    int min = 2;
    int max = 19;
    FillArray(arr, min, max);
    array<int, 10>::const_iterator iter = arr.begin();
    while (iter != arr.end() - 1)
    {
        cout << *iter << endl;
        iter++;
    }
    
    return 0;
}

int GenerateRandomNumber(int min, int max)
{
    srand(time(0));
    int randomNumber = min + (rand() % max);
    return randomNumber;
}

void FillArray(array<int, 10>& arr, int min, int max)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        long_operation();
        int tempNum = GenerateRandomNumber(min, max);
        arr[i] = tempNum;
    }
}

void long_operation()
{
    using namespace std::chrono_literals;
    this_thread::sleep_for(1500ms);
}