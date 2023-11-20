#include <string>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
    deque<string> deq = {"bob1", "bob2", "bob3"};
    string newGuy;
    while (cin >> newGuy)
    {
        deq.push_back(newGuy);
        deq.pop_front();
        for (auto iter = deq.cbegin(); iter != deq.cend(); ++iter)
        {
            cout << *iter << ' ';
        }
        cout << endl;
    }

    return 0;

}