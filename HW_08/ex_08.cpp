#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<int> ReadVectorFromFile(const string& filename);

int main()
{
    string filename = "ex_07.txt";
    vector<int> vec = ReadVectorFromFile(filename);
    for (const int num : vec)
    {
        cout << num << endl;
    }
    return 0;
}

vector<int> ReadVectorFromFile(const string& filename)
{
    vector<int> numbers;
    ifstream file(filename);
    int num = 0;

    if (file.is_open())
    {
        while (file >> num)
        {
            numbers.push_back(num);
        }
        file.close();
    }
    else
    {
        cout << "Couldn't open the file!";
    }
    return numbers;
}