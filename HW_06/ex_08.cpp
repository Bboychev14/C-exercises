#include "ex_01.cpp"

u8 u8_reverse_bits(u8 num)
{
    u8 result = 0;
    for (u8 i = 0; i < 8; ++i)
    {
        result <<= 1;
        result |= num & 1;
        num >>= 1;
    }
    return result;
}