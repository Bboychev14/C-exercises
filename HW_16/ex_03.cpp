#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool HasOnlyOnes(int number);

void RemoveNumbersWithZero(vector<int>& vec);

int main()
{
    vector<int> v = {1, 2, 4, 7, 3, 255, 254};
    RemoveNumbersWithZero(v);
    for (auto el : v)
    {
        cout << el << ' ';
    }
}

bool HasOnlyOnes(int number) // we'll use it as predicate for remove_if
{
    while (number != 0)
    {
        int currDigit = number & 1;
        if (currDigit != 1)
        {
            return true;
        }
        number >>= 1;
    }
    return false;
}

void RemoveNumbersWithZero(vector<int>& vec)
{
    auto newEnd = remove_if(vec.begin(), vec.end(), HasOnlyOnes);
    vec.erase(newEnd, vec.end());
}