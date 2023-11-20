#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> ReturnLongestSortedSubVector(const vector<int>& vec);

int main()
{
    vector<int> vec = {1, 2, 1, 2, 3, 4, 8, 2};
    vector<int> resultVec = ReturnLongestSortedSubVector(vec);
    for (int i = 0; i < resultVec.size(); ++i)
    {
        cout << resultVec[i] << " ";
    }

    return 0;
    
}

vector<int> ReturnLongestSortedSubVector(const vector<int>& vec)
{
    int resultPos = 0;
    int tempCounter = 0;
    int resultCounter = 0;
    int tempElement = INT_MIN;

    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] > tempElement)
        {
            tempElement = vec[i];
            tempCounter++;
            if (tempCounter > resultCounter)
            {
                resultCounter = tempCounter;
                resultPos = i - resultCounter + 1;
            }
        }
        else
        {
            tempElement = INT_MIN;
            --i;
            tempCounter = 0;
        }
    }
    auto start = vec.cbegin() + resultPos;
    auto end = start + resultCounter;
    std::vector<int> longestVec(start, end);
    return longestVec;
}

/* vector<int> ReturnLongestSortedSubVector(const vector<int>& vec)
{
    //Could use two variables (pos and counter) instead of vectors
    vector<int> tempVec;
    vector<int> longestVec;
    int tempElement = INT_MIN;

    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] > tempElement)
        {
            tempElement = vec[i];
            tempVec.push_back(vec[i]);
            if (tempVec.size() > longestVec.size())
            {
                longestVec.clear();
                longestVec = tempVec;
            }
        }
        else
        {
            tempVec.clear();
            tempElement = INT_MIN;
            --i;
        }
    }
    return longestVec;
} */