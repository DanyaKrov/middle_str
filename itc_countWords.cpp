#include "middle_str.h"

int itc_countWords(string str)
{
    bool issp = false;
    long long length = 0, kol = 0;
    if (str == "")
        return 0;
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
        {
            length ++;
        }
        else
        {
            if (str[i] == ' ')
                issp = true;
            if (length > 0)
                kol++;
            length = 0;
        }
    }
    if (length > 0)
        kol++;
    if (!issp)
        kol = 0;
    return kol;
}
