#include "middle_str.h"

unsigned char itc_toUpper(unsigned char c)
{
    if (97 <= c && c <= 122)
        return c - 32;
    else
        return c;
}
