#include <iostream>
#include <deque>

using namespace std;

int FindDigit(deque<int>& v, int target);

void PushDigitsIntoVector(int number, deque<int>& v);

int main()
{
    int num = 123456789;
    int target = 0;
    deque<int> vec;
    PushDigitsIntoVector(num, vec);
    cout << FindDigit(vec, target);

    return 0;

}

void PushDigitsIntoVector(int number, deque<int>& v)
{
    while (number > 0)
    {
        v.push_front(number % 10);
        number /= 10;
    }
}

int FindDigit(deque<int>& v, int target)
{
    int low = 0;
    int high = v.size() - 1;
    while ((high - low) > 1)
    {
        int mid = (high + low) / 2;
        if (target > v[mid])
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    if (v[low] == target)
    {
        return low;
    }
    else if (v[high] == target)
    {
        return high;
    }
    return -1;
}