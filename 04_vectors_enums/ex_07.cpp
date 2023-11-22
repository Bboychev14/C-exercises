#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printLongestString(vector<string>& vec);

int main()
{
    vector<string> vec = {"asdq", "ds", "asdq", "ds", "asdqweasd"};
    printLongestString(vec);
    return 0;
}

void printLongestString(vector<string>& vec)
{
    int countChars = 0;
    vector<string> result;

    for (int i = 0; i < vec.size(); ++i)
    {
        int currentCount = count(vec.begin(), vec.end(), vec[i]);
        if (currentCount > countChars)
        {
            countChars = currentCount;
            result.clear();
            result.push_back(vec[i]);
        }
        else if (currentCount == countChars && count(result.begin(), result.end(), vec[i]) == 0)
        {
            result.push_back(vec[i]);
        }
    }
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << endl;
    }  
}