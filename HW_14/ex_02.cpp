#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    vector<int> b;
    int el = 0;
    while (cin >> el)
    {
        a.push_back(el);
        cout << "Size: " << a.size() << endl;
        cout << "Capacity: " << a.capacity() << endl;
    }

    b.reserve(10);
    for (int i = 0; i < 10; ++i)
    {
        b.push_back(i);
        cout << "Size: " << b.size() << endl;
        cout << "Capacity: " << b.capacity() << endl;
    }

    return 0;

}