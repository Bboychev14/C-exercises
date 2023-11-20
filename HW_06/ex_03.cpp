#include <iostream>
#include "ex_01.cpp"

u8 u8_set_bit_on(u8 num, u8bitpos pos)
{
    u8 mask = 1 << pos;
    num |= mask;
    
    return num;
}

