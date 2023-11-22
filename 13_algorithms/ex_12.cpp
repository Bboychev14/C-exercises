#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void MoveEvensToTheFront(vector<int>& vec);

bool IsEven(int num);

int main()
{
    vector<int> v = {1, 3, 5, 2, 4, 6, 7};
    MoveEvensToTheFront(v);
    for (int num : v)
    {
        cout << num << ' ';
    }

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

void MoveEvensToTheFront(vector<int>& vec)
{
    partition(vec.begin(), vec.end(), IsEven);
}