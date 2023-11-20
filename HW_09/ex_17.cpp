#include <iostream>
#include <vector>

using namespace std;

void MakePattern(int n);

void PrintPattern(const vector<vector<int>>& pattern);

int main(int argc, char* argv[])
{
    int n = stoi(argv[1]);
    MakePattern(n);
    return 0;
}

void PrintPattern(const vector<vector<int>>& pattern)
{
    for (const auto& row : pattern)
    {
        for (const auto& num : row)
        {
            cout << num << ' ';
        }
        cout << endl;
    }
}

void MakePattern(int n)
{
    vector<vector<int>> vec(n, vector<int>(n, 11));
    int reps = 2 * n - 1;
    int row = 0;
    int col = 0;
    int counter = 0;
    while (reps > 0)
    {
        for (; col < n && vec[row][col] == 11; ++col)
        {
            vec[row][col] = counter % 10;
            ++counter;
        }
        --reps;
        --col;
        ++row;
        for (; row < n && vec[row][col] == 11; ++row)
        {
            vec[row][col] = counter % 10;
            ++counter;
        }
        --reps;
        --row;
        --col;
        for (;col >= 0 && vec[row][col] == 11; --col)
        {
            vec[row][col] = counter % 10;
            ++counter;
        }
        --reps;
        ++col;
        --row;
        for (;row >= 0 && vec[row][col] == 11; --row)
        {
            vec[row][col] = counter % 10;
            ++counter;
        }
        --reps;
        ++col;
        ++row;
    }
    PrintPattern(vec);
}