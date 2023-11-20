#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool IsDigitMissing(int number, int target);

int FindFirstNonConsistingNumber(const vector<int>& vec, int target);

int main()
{
    vector<int> v = {123, 142, 21, 2131, 418, 2443, 142};
    int num = 2;
    int result = FindFirstNonConsistingNumber(v, num);
    cout << result;
}

bool IsDigitMissing(int number, int target)
{
    while (number > 0)
    {
        int tempDigit = number % 10;
        if (tempDigit == target)
        {
            return false;
        }
        number /= 10;
    }
    return true;
}

int FindFirstNonConsistingNumber(const vector<int>& vec, int target)
{
    auto func = [target](int number) {return IsDigitMissing(number, target);};
    auto iter = find_if(vec.begin(), vec.end(), func);
    {
        return *iter;
    }
    return -1;
}