#include <iostream>
#include <vector>

using namespace std;

bool FindNumber(vector<int>& v, int target);

int main()
{
    vector<int> vec = {1, 9, 23, 39, 50, 68, 102, 301};
    int target = -1;
    cout << FindNumber(vec, target);

    return 0;

}

bool FindNumber(vector<int>& v, int target)
{
    int low = 0;
    int high = v.size() - 1;
    while ((high - low) > 1)
    {
        int mid = (high + low) / 2;
        if (target > v[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    if (v[low] == target)
    {
        return true;
    }
    else if (v[high] == target)
    {
        return true;
    }
    return false;
}