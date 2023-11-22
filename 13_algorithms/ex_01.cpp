#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void MakeZeroEveryEqualNeighbour(vector<int>& vec);

int main()
{
    vector<int> v = {9, 9, 1, 2, 3, 4, 1, 1, 1, 1, 2, 2, 2, 3, 4, 5, 5};
    MakeZeroEveryEqualNeighbour(v);
    for (int el : v)
    {
        cout << el << ", ";
    }
}

void MakeZeroEveryEqualNeighbour(vector<int>& vec)
{
    int temp = 0;
    for (auto iter = vec.begin(); iter < vec.end(); ++iter)
    {
        if (*iter == *(iter + 1))
        {
            temp = *iter;
            fill_n(iter, 2, 0);
        }
        if ((*iter == 0) && (*(iter + 1) == temp))
        {
            fill_n(iter, 2, 0);
        }
    }
}