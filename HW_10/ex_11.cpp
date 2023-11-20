#include <iostream>
#include <vector>

using namespace std;

using fp = bool (*)(const unsigned char&);

bool EqualZeroesAndOnes(const unsigned char& element);

bool IsAlternating(const unsigned char& element);

int CountElements(const vector<unsigned char>& vec, fp funcptr);

int main()
{
    vector<unsigned char> vec = { 0b11100101, 0b10101010, 0b11001100, 0b11110000 };
    cout << "Elements with equal count of zeroes and ones: " << endl;
    cout << CountElements(vec, EqualZeroesAndOnes) << endl;
    cout << "Elements count with alternating values: " << endl;
    cout << CountElements(vec, IsAlternating);

    return 0;

}

bool IsAlternating(const unsigned char& element)
{
    for (int i = 0; i < 7; ++i)
    {
        if ((element & (1 << i)) == (element & (1 << (i + 1))))
        {
            return false;
        }
    }
    return true;
}

int CountElements(const vector<unsigned char>& vec, fp funcptr)
{
    int counter = 0;
    for (const auto& el : vec)
    {
        if (funcptr(el))
        {
            ++counter;
        }
    }
    return counter;
}

bool EqualZeroesAndOnes(const unsigned char& element)
{
    int zeroes = 0;
    int ones = 0;
    for (int i = 0; i < 8; ++i)
    {
        if (element & (1 << i))
        {
            ++ones;
        }
        else
        {
            ++zeroes;
        }
    }
    return zeroes == ones;
}