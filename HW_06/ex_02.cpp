#include <iostream>
#include "ex_01.cpp"
u8bit u8_get_bit(u8 num, u8bitpos pos);
using namespace std;

int main()
{ 
    cout << u8_get_bit(0b01001110, 3);
    return 0;
}

u8bit u8_get_bit(u8 num, u8bitpos pos)
{
    return (num >> pos) & 1;
}