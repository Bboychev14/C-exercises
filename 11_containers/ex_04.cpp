#include <iostream>
#include <string>
#include <deque>

using namespace std;

string ReverseString(string& str);

int main()
{
    string line;
    deque<string> deq;
    while (cin >> line)
    {
        deq.push_front(ReverseString(line));
    }
    for (auto iter = deq.cbegin(); iter != deq.cend(); ++iter)
    {
        cout << *iter << endl;
    }
    
}

string ReverseString(string& str)
{
    for (auto iter1 = str.begin(), iter2 = str.end() - 1; iter1 <= iter2; ++iter1, --iter2)
    {
        swap(*iter1, *iter2);
    }

    return str;

}