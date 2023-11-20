#include <iostream>
#include <algorithm>
#include <numeric>
#include <list>
#include <vector>

using namespace std;

int main()
{
    list<int> lst;
    int num = 0;
    int numToFind = 14;

    while (cin >> num)
    {
        auto it = lower_bound(lst.begin(), lst.end(), num);
        lst.insert(it, num);
    }

    auto result = binary_search(lst.begin(), lst.end(), numToFind);
    if (result)
    {
        cout << "Fount!";
    }
    else
    {
        cout << "Not found!";
    }

    return 0;
    
}