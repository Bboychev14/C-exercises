#include <iostream>

using namespace std;

void fibbonacci(int num)
{
    int num0 = 0, num1 = 1, nextNum = 0;
    cout << num0 << " " << num1 << " ";
    for(int i = 2; i <= num; i++)
    {
        nextNum = num0 + num1;
        cout << nextNum << " ";
        num0 = num1;
        num1 = nextNum;
    }
}

/* This function prints a sequence of fibbonacci numbers.
 */

/* int main()
{
    int index = 0;
    cout << "Enter index: ";
    cin >> index;
    fibbonacci(index);

    return 0;
} */