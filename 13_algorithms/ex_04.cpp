#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int square(int num)
{
    return num * num;
}

int main() {
    vector<int> original = {0, 4, 9, 12, 15};
    vector<int> squared(original.size());

    transform(original.begin(), original.end(), squared.begin(), square);

    for (int el : squared)
    {
        cout << el << ' ';
    }
    return 0;
}
