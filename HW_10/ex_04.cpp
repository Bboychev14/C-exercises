#include <iostream>

using namespace std;

constexpr int factoriel(int n)
{
    int result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    constexpr int result = factoriel(4);
    cout << result;
    return 0;
}