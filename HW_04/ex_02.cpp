#include <iostream>

using namespace std;

void swap(int& num1, int& num2)
{
    int tempNum = num1;
    num1 = num2;
    num2 = tempNum;
}

/* In case you want to test the swap function just uncomment the main func. 
It should swap the values of its arguments.*/

/* int main()
{
    int a = 5;
    int b = 23;
    cout << "a=" << a << " b=" << b << endl;
    swap(a, b);
    cout << "a=" << a << " b=" << b;

    return 0;
} */