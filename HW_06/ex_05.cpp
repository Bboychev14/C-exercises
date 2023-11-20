#include "ex_01.cpp"

u8 u8_set_bit(u8 num, u8bitpos pos, u8bit val)
{
    u8 mask = 1 << pos;
    if (val)
    {
        num |= mask;
    }
    else
    {
        num &= ~mask;
    }
    return num;
}