#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printDuplicateStrings(const vector<string>& vec);

int main()
{
    vector<string> vec = {"asd", "qwe", "asd", "ert", "qwe"};
    printDuplicateStrings(vec);
    return 0;
}

void printDuplicateStrings(const vector<string>& vec)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        if (count(vec.begin(), vec.end(), vec[i]) > 1)
        {
            cout << vec[i] << endl;
        }
    }

}