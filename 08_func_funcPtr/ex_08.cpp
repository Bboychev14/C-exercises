#include <iostream>
#include <initializer_list>

using namespace std;
using fp = bool (*)(int);

bool IsEven(int num);

bool IsNegative(int num);

int FindValue(initializer_list<int>& arr, fp funcptr);

int main()
{
    initializer_list<int> list1 = { 1, 3, -5, 6};
    cout << FindValue(list1, IsEven);

    return 0;
}

bool IsEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    return false;
}

bool IsNegative(int num)
{
    if (num < 0)
    {
        return true;
    }
    return false;
}

int FindValue(initializer_list<int>& arr, fp funcptr)
{
    for (int num : arr)
    {
        if (funcptr(num))
        {
            return num;
        }
    }
    return 999;
}