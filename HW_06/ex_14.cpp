#include <iostream>

using namespace std;

int HammingDistance(int num1, int num2);

int main()
{
    int num1 = 5;
    int num2 = 12;
    cout << HammingDistance(num1, num2);
}

int HammingDistance(int num1, int num2)
{
    int distance = 0;
    int xorResult = num1 ^ num2;

    while (xorResult > 0)
    {
        if (xorResult & 1)
        {
            ++distance;
        }
        xorResult >>= 1;
    }
    return distance;
}