#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void WriteVectorIntoFile(const vector<int>& vec, const string& filename);

int main()
{
    vector<int> vec = {1412, -241, 10000};
    string filename = "ex_07.txt";
    WriteVectorIntoFile(vec, filename);
    return 0;
}

void WriteVectorIntoFile(const vector<int>& vec, const string& filename)
{
    ofstream file(filename);
    if (file.is_open())
    {
        for (const int& num : vec)
        {
            file << num << endl;
        }
        file.close();
    }
    else
    {
        cout << "Couldn't open the file!";
    }
}