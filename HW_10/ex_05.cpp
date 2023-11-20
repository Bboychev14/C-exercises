#include <iostream>

using namespace std;

constexpr int fibbonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int num1 = 0;
    int num2 = 1;
    for (int i = 2; i <= n; ++i)
    {
        int temp = num1 + num2;
        num1 = num2;
        num2 = temp;
    }
    return num2;
}

int main()
{
    cout << fibbonacci(6);
    return 0;
}