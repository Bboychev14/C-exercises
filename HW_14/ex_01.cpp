#include <deque>
#include <iostream>

using namespace std;

void PrintContainer(const deque<int>& deq);

int main()
{
    deque<int> a, b;
    a = {1, 2, 3, 4, 5};
    b = {8, 9, 10};
    cout << "Old values!" << endl;
    PrintContainer(a);
    PrintContainer(b);
    swap(a, b); // Wasn't sure if we had to do it with loop or the way I did it.
    cout << "New values!" << endl;
    PrintContainer(a);
    PrintContainer(b);

    return 0;

}

void PrintContainer(const deque<int>& deq)
{
    for (auto iter = deq.cbegin(); iter != deq.cend(); ++iter)
    {
        cout << *iter << ' ';
    }
    cout << endl;
}