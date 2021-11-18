#include "middle_str.h"

bool itc_compare(string S1, string S2)
{
    if (S1 == "" || S2 == "")
        return false;
    long long len1 = itc_len(S1), len2 = itc_len(S2);
    if (len1 != len2)
        return false;
    for(int i = 0; i < len1; i++){
        if (S1[i] != S2[i])
            return false;
    }
    return true;
}
