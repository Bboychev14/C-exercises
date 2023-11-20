#include <iostream>
#include <vector>

using namespace std;

void splitString(string& str1, string& str2, vector<string>& vec);
void printVector(vector<string>& vec);

int main()
{
    string text = "Hello.md/fk";
    string delimiter = "./";
    vector<string> vec;
    splitString(text, delimiter, vec);
    printVector(vec);


    return 0;
}

void splitString(string& str1, string& str2, vector<string>& vec)
{
    string tempString;
    for (char ch : str1)
    {
        if (str2.find(ch) != string::npos)
        {
            vec.push_back(tempString);
            tempString.clear();
        }
        else
        {
            tempString += ch;
        }
    }
    vec.push_back(tempString);
}

void printVector(vector<string>& vec)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }
}