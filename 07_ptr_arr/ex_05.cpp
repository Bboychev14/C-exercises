#include <iostream>

using namespace std;

void CopyEvensAndOdds(const unsigned char* base, size_t size, unsigned char* evens, unsigned char* odds);

int main()
{
    unsigned char baseArray[] = {5, 10, 15, 25};
    size_t size = sizeof(baseArray) / sizeof(baseArray[0]);
    unsigned char evens[size] = {0};
    unsigned char odds[size] = {0};
    CopyEvensAndOdds(baseArray, size, evens, odds);
    cout << "Evens: ";
    int i = 0;
    while (evens[i] != 0)
    {
        cout << static_cast<int>(evens[i]) << " ";
        i++;
    }
    cout << endl << "Odds: ";
    i = 0;
    while (odds[i] != 0)
    {
        cout << static_cast<int>(odds[i]) << " ";
        i++;
    }
    return 0;
}

void CopyEvensAndOdds(const unsigned char* base, size_t size, unsigned char* evens, unsigned char* odds)
{
    int oddsCount = 0;
    int evensCount = 0;
    const unsigned char* ptr = base;
    while (ptr < base + size)
    {
        unsigned char value = *ptr;
        int count = 0;

        while (value != 0)
        {
            if (value & 1)
            {
                count++;
            }
            value >>= 1;
        }
        if (count % 2 == 0)
        {
            evens[evensCount] = *ptr;
            evensCount ++;
        }
        else
        {
            odds[oddsCount] = *ptr;
            oddsCount++;
        }
        ptr++;
    }
}