#include <iostream>
#include <vector>

using namespace std;

using u8 = unsigned char;
using u8bitpos = char;
using u8bit = bool;

u8 biggestXOR(vector<u8> vec);
int main()
{
    vector<u8> wholeNums = {0b11110011, 0b01010011, 0b00001101};
    cout << static_cast<int>(biggestXOR(wholeNums));

    return 0;
}

u8 biggestXOR(vector<u8> vec)
{
    u8 biggestXOR = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        u8 currentXOR = 0;
        for (int j = 0; j < vec.size(); j++)
        {
            currentXOR = vec[i] ^ vec[j];
            if (currentXOR > biggestXOR)
            {
                biggestXOR = currentXOR;
            }
        }
    }
    return biggestXOR;
}