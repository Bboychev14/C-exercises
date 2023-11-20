#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool AreBracesClosed(const string& str);

int main()
{
    string str = "[as(sd)]a{sada(sda)asd}";
    cout << AreBracesClosed(str);
    return 0;
}

bool AreBracesClosed(const string& str)
{
    stack<char> s;
    for (char ch : str)
    {
        if (ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            if (s.empty())
            {
                return false;
            }
            char lastBracket = s.top();
            s.pop();
            if ((ch == ')' && lastBracket != '(') ||
            (ch == ']' && lastBracket != '[') ||
            (ch == '}' && lastBracket != '{'))
            {
                return false;
            }
        }
    }
    if (s.empty())
    {
        return true;
    }
    return false;
}