#include "middle_str.h"

char itc_sameChar(string str)
{
    long long length = 0, kol = 0;
    string word = "";
    string ans = "";
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
        {
            kol = 0;
            word += str[i];
            length ++;
            for (long long _ = 0; str[_] != '\0'; _++)
            {
                if (str[_] == str[i])
                    kol++;
            }
            if (kol == 2)
                return str[i];
        }
        else
        {
            length = 0;
        }
    }
}
