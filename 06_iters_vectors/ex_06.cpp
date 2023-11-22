#include <iostream>
#include <array>

using namespace std;

int ReturnFirstUniqueValue(array<int, 10>& arr);

int main()
{
    array<int, 10> arr = {1, 2, 3, 4, 1, 4, 56, 12, 31, 100};
    cout << ReturnFirstUniqueValue(arr);
    return 0;
}

int ReturnFirstUniqueValue(array<int, 10>& arr)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        bool found = true;
        for (int j = 0; j < arr.size(); ++j)
        {
            if ((arr[i] == arr[j]) && i != j)
            {
                found = false;
                break;
            }
        }
        if (found)
        {
            return arr[i];
        }
    }
    return -222;
}