#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using fp = void (*)(string&);

void PrintCurrElement(string& str);

void ReverseElement(string& str);

auto GoThroughVector(vector<string>& vec, fp funcPtr) ->void;

auto GoThroughVector(vector<string>& vec) -> void;



int main()
{
    vector<string> vec = {"ASD", "asd", "zxC1v"};
    GoThroughVector(vec, PrintCurrElement);
    cout << "Reversed elements:" << endl;
    GoThroughVector(vec, ReverseElement);
    cout << "Lowered elements:" << endl;
    GoThroughVector(vec);

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

auto GoThroughVector(vector<string>& vec) -> void
{
    for (string& str : vec)
    {
        for (int i = 0; i < str.length(); ++i)
        {
            str[i] = tolower(str[i]);
        }
        cout << str << endl;
    }
}