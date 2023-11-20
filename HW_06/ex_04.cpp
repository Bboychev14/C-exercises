#include "ex_01.cpp"

u8 u8_set_bit_off(u8 num, u8bitpos pos)
{
    u8bit mask = ~(1 << pos);
    return num &= mask;
}