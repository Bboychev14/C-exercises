#include <iostream>

using namespace std;

int fibbseq(int num)
{
    if(num <= 1)
    {
        return num;
    }

    return fibbseq(num - 1) + fibbseq(num - 2);
    
}

int main()
{
    int index = 0;
    cout << "Enter the index of the nubmer you want: ";
    cin >> index;
    cout << fibbseq(index);

    return 0;
}