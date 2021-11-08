#include "middle_str.h"

int itc_kol_slov(string str)
{
    int kol = 1, len = itc_len(str);
    for(int i = 0; i < len; i++){
        if (str[i] == 32)
            kol ++;
    }
    return kol;
}
