#include "middle_str.h"

int itc_countWords(string str)
{
    int kol = 0, length = 0;
    string word = "";
    string ans = "";
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
        {
            word += str[i];
            length ++;
        }
        else
        {
            if (length != 0)
                kol++;
            length = 0;
            word = "";
        }
    }
    if (length != 0)
        kol++;
    return kol;
}
