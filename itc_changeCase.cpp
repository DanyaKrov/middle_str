#include "middle_str.h"

unsigned char itc_changeCase(unsigned char c)
{
    if (97 <= c && c <= 122)
        return c - 32;
    else if (65 <= c && c <= 90)
        return c + 32;
    else
        return c;
}
