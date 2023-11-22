#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {1, 4, 7, 12, 14, 45, 90, 103};
    int target = 90;
    int nonExisting = 2;
    cout << binary_search(v.begin(), v.end(), target) << endl;
    cout << binary_search(v.begin(), v.end(), nonExisting);

    return 0;

}