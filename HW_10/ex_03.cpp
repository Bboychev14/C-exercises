#include <iostream>

using namespace std;

constexpr int power(int base, int exponent = 2)
{
    int result = 1;
    for (int i = 0; i < exponent; ++i)
    {
        result *= base;
    }
    return result;
}
int main()
{
    constexpr int res1 = power(5); 
    int res2 = power(12);
    cout << res1 << "   " << res2;
    return 0;
}
