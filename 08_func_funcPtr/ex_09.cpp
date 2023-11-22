#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using fp = void (*)(string&);

void PrintCurrElement(string& str);

void ReverseElement(string& str);

auto GoThroughVector(vector<string>& vec, fp funcPtr) ->void;

int main()
{
    vector<string> vec = {"ASD", "asd", "zxcv"};
    GoThroughVector(vec, ReverseElement);
    GoThroughVector(vec, PrintCurrElement);

    return 0;

}

void ReverseElement(string& str)
{
    reverse(str.begin(), str.end());
    cout << str << endl;
}

void PrintCurrElement(string& str)
{
    cout << str << endl;
}

auto GoThroughVector(vector<string>& vec, fp funcPtr) -> void
{
    for (string str : vec)
    {
        funcPtr(str);
    }
}