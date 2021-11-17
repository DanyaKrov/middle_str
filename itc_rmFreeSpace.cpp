#include "middle_str.h"

string itc_rmFreeSpace(string str)
{
    string word = "", word1 = "";
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            word1 += str[i];
        }
        else
        {
            if (word1 != "")
                word1 = " ";
            word += word1;
            word1 = "";
            word += str[i];
        }
    }
    return word;
}
