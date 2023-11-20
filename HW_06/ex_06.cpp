#include "ex_01.cpp"

u8 u8_toggle_bit(u8 num, u8bitpos pos)
{
    u8 mask = 1 << pos;
    return num ^= mask;
}