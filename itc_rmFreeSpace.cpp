#include "middle_str.h"

string itc_rmFreeSpace(string str)
{
    if (str == "")
        return "";
    string word = "";
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if ((i == 0 && str[i] == 32))
        {
            word += str[i];
        }
        else if ((str[i] != 32 || str[i + 1] != 32) && (str[i] != 32 || str[i + 1] != '\0'))
            word += str[i];
    }
    return word;
}
