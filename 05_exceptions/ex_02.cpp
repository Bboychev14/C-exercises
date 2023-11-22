#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

bool IsSubVector(const vector<int>& vec);

int main()
{
    vector<int> vec = {9, 3, -2, -1, 7};
    cout << IsSubVector(vec);
    return 0;
}

bool IsSubVector(const vector<int>& vec)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        int sum = 0;
        for (int j = i; j < vec.size(); ++j)
        {
            sum += vec[j];
            if (sum == 0)
            {
                return true;
            }
        }
    }
    return false;
}