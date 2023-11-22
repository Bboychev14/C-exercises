//Should fix the case sensitivity.
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

bool IsAnagram(const string& str1, const string& str2);

vector<string> splitString(const string& input);

int main()
{
    string input;
    cout << "Enter you'r input: ";
    while (getline(cin, input))
    {
        vector<string> vec = splitString(input);
        for (int i = 0; i < vec.size(); ++i)
        {
            for (int j = 0; j < vec.size(); ++j)
            {
                if (IsAnagram(vec[i], vec[j]))
                {
                    cout << vec[i] << " - " << vec[j];
                    cout << endl;
                }  
            }
        }

    }
    return 0;
}

bool IsAnagram(const string& str1, const string& str2)
{
    if (str1 == str2)
    {
        return false;
    }
    string tempString = str1;
    if (str1.length() != str2.length())
    {
        return false;
    }
    for (int i = 0; i < str1.length(); ++i)
    {
        if (str2.find(str1[i]) != string::npos)
        {
            tempString.erase(0, 1);
        }
    }
    if (tempString.length())
    {
        return false;
    }
    return true;
}

vector<string> splitString(const string& input) {
    vector<string> words;
    stringstream ss(input);
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    return words;
}