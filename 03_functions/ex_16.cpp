#include <iostream>

using namespace std;

int fibbonacci(int num)
{
    if(num < 2)
    {
        return num;
    }
    int previous = 1;
    int x = 1;
    for(int i = 2; i < num; i++)
    {
        int tempNum = x;
        x += previous;
        previous = tempNum;
    }
    return x;
}

int main()
{
    int index = 0;
    cout << "Enter the index of the nubmer you want: ";
    cin >> index;
    cout << fibbonacci(index);

    return 0;
}